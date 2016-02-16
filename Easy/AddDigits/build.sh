# build gtest
THIRD_PARTY_DIR="../../thirdParty"
GTEST_DIR=$THIRD_PARTY_DIR/gtest-1.7.0
echo $GTEST_DIR

# prepare the build folder to keep build clean and separated from sources
mkdir build
cd build

# do the actual build
cmake ..
make
./Solution

# cleanup after build
cd ..
rm -rf build
