#!/bin/bash
# this is the bash script to make a solution folder that is common for most of algorythms.

PROJ_NAME=$1

if [ ${PROJ_NAME} = "" ]
then
    echo "Please enter the project name"
    exit 1
else
    echo "Creating a template for ${PROJ_NAME}..."
fi

if [ -d ${PROJ_NAME} ]
then
    echo "Project folder exists already"
    exit 1
else
    mkdir ${PROJ_NAME}
fi

cp -r Template/* ${PROJ_NAME}

#here add renaming manually until I find out nice renaming script
mv ${PROJ_NAME}/src/PROJ_NAME.h ${PROJ_NAME}/src/${PROJ_NAME}.h
mv ${PROJ_NAME}/src/PROJ_NAME_gtest.cpp ${PROJ_NAME}/src/${PROJ_NAME}_gtest.cpp
# replace PROJ_NAME to the new name. -i '' will prevent creating a backup file after replacement
sed -i '' -e "s/PROJ_NAME/${PROJ_NAME}/g" ${PROJ_NAME}/src/${PROJ_NAME}_gtest.cpp

