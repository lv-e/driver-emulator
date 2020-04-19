
FROM lvedock/lve_runtime

# compiler setup
RUN apk add --update g++ make

# copy files from source to 
COPY lv-driver /lv/source/lv-driver
COPY scripts /lv/scripts