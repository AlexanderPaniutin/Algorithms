
GTEST_DIR = ../../thirdParty/gtest-1.7.0
SOURCES = Solution_test.cpp
TARGET = Solution 

all: $(TARGET)
	@echo "$(TARGET) is compiled"

libgtest_main.a:
	cd $(GTEST_DIR)/make && $(MAKE) gtest_main.a
	cp $(GTEST_DIR)/make/gtest_main.a $(GTEST_DIR)/make/libgtest_main.a

$(TARGET): libgtest_main.a
	g++ $(SOURCES) -I$(GTEST_DIR)/include -L$(GTEST_DIR)/make -lgtest_main -o $(TARGET)

clean:
	rm -rf *.o $(TARGET)

.PHONY: clean
