#ifndef GENERATE_PARENTHESES_H_
#define GENERATE_PARENTHESES_H_

#include <string>
#include <vector>

// Method 1
// This will go from (((((( to ))))))) and verify each combination
unsigned long getMaxSupported(int n);
bool isValidParenthesis(unsigned long value, unsigned int bits);
std::string generateParenthesis(unsigned int value, unsigned int bits);
std::vector<std::string> generateParenthesis(int n);

// Method 2
void build(int left, int right, int n, std::string s, std::vector<std::string> &res);
std::vector<std::string> generateParenthesis2(int n);

#endif // GENERATE_PARENTHESES_H_
