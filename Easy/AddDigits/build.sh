CWD=$(pwd)

# setup third party libs
THIRD_PARTY_DIR="../../thirdParty"
GTEST_DIR=$THIRD_PARTY_DIR/gtest-1.7.0

# build gtest
cd $GTEST_DIR/make
echo $(pwd)
make gtest_main.a
cp gtest_main.a libgtest_main.a
cd $CWD
echo $(pwd)

echo $GTEST_DIR

# prepare the build folder to keep build clean and separated from sources
#mkdir build
#cd build

# do the actual build
make
./Solution
make clean

# make clean
# cd ..
# rm -rf build
