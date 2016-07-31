#ifndef SOLUTION_H_
#define SOLUTION_H_

#include <string>

class Solution
{
 public:
  Solution();
  ~Solution();

  std::string minWindow(const std::string &s, const std::string &t);

 private:
  int leftEdge;
  int rightEdge;
  static const int arrSize = 255;
  char charsOfT[arrSize];
  char charsTInGap[arrSize];
  std::string result;

  // init internal data/state
  void init();

  // init charsOfT and CharsTInGap and sets values to 0
  void initCharsTable();

  unsigned int getCharNdx(char ch);

  // puts 1 next to each code symbol from T. A has index 0
  void initCharsOfT(const std::string &t);

  // counts amount of chars of each type from T. A has index 0
  void initCharsTInGap(const std::string &t);

  // verifies if ch is found in T. uses charsOfT to make O(1) call
  bool isPartOfT(char ch);

  // verifies if gap contains all the items from T. Uses charsTInGap
  bool isGapComplete();

  // when all items are found and the most left is same as most right - it shifts left edge right way.
  void moveLeftEdge(const std::string &s);

  // registers gap based on leftEdge and rightEdge but only if new gap is smaller then already found
  void registerGap(const std::string &s);
};

#endif // SOLUTION_H_
