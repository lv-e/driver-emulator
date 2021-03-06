#!/bin/bash

# say hello because it's polite
echo "hi! this is > lv emulator driver < 's maintenance script"


## available commands

commit(){

    if [[ `git status --porcelain` ]]; then
        echo 'you do have local changes!'
        echo 'will now commit after publishing.'
    else
        echo 'you don''t have local changes. do you really need a new version?'
        echo 'anyway, will now commit after publishing.'
    fi

    read -p 'it''s that okay (y/n)? ' yn; echo '--'

    case $yn in
        [Yy]* ) 

            echo 'what''s the commit message?'
            read commit_message; echo '--'

            git add .
            git commit --allow-empty -m "$commit_message"
            echo 'there you go!'
            break;;

        * )
            echo 'ok! bye.'
            exit;;
    esac
}

publish_docker(){

    while true; do

        echo 'will now build and publish a new emulator docker image.'
        read -p 'it''s that okay (y/n)? ' yn; echo '--'

        case $yn in
            [Yy]* ) 
                
                docker login
                docker build -t lvedock/lve_emulator .
                docker push lvedock/lve_emulator
                echo 'there you go!'
                break;;
            [Nn]* )
                echo 'ok! bye.'
                exit;;
            * ) 
                echo 'Please answer yes or no.'
        esac
    done
}

run_sandbox(){
    echo 'Will now compile using make...'
    make -f sandbox/Makefile
    make -f sandbox/Makefile clean
    echo 'Done! running sandbox program:'
    ./sandbox/game
}

update_engine(){
    echo 'Asking for git to update engine:'
    git submodule update --remote -q
    echo 'Done! Shine brand new engine!'
}

## what should we do?

 while true; do

        echo "available options are:"
        echo " 1) publish docker image"
        echo " 2) run as sandbox"
        echo " 3) just make a commit"
        echo " 4) update engine"
        read -p "choose one: " opt; echo "--"

        case $opt in
            1 ) publish_docker; commit; break;;
            2 ) run_sandbox; break;;
            3 ) commit; break;;
            4 ) update_engine; break;;
            * ) echo "ok! bye."; exit;;
        esac
done