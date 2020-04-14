#!/bin/bash

# say hello because it's polite
echo "hi! this is > lv emulator driver < 's maintenance script"


## available commands

publish_docker(){
    
    while true; do

        echo "will now build and publish a new emulator docker image."
        read -p "it's that okay (y/n)? " yn; echo "--"

        case $yn in
            [Yy]* ) 
                
                docker login
                docker build -t lvedock/lve_emulator .
                docker push lvedock/lve_emulator
                echo "there you go!"
                break;;
            [Nn]* )
                echo "ok! bye."
                exit;;
            * ) 
                echo "Please answer yes or no."
        esac
    done
}

run_sandbox(){
    echo "Will now compile using make..."
    make -f sandbox/Makefile
    make -f sandbox/Makefile clean
    echo "Done! running sandbox program:"
    ./sandbox/game
}

## what should we do?

 while true; do

        echo "available options are:"
        echo " 1) publish docker image"
        echo " 2) run as sandbox"
        read -p "choose one: " opt; echo "--"

        case $opt in
            1 ) publish_docker; break;;
            2 ) run_sandbox; break;;
            * ) echo "ok! bye."; exit;;
        esac
done