
GTEST_DIR := thirdParty/gtest-1.7.0
SOURCES := Easy/AddDigits/Solution_test.cpp

all: libgtest_main.a solution
	echo "Done!"

libgtest_main.a:
	cd $(GTEST_DIR)/make && $(MAKE) gtest_main.a
	cp $(GTEST_DIR)/make/gtest_main.a $(GTEST_DIR)/make/libgtest_main.a

solution:
	g++ $(SOURCES) -I$(GTEST_DIR)/include -L$(GTEST_DIR)/make -lgtest_main -o Solutions

clean:
	rm -rf *.o Solution

.PHONY: clean
