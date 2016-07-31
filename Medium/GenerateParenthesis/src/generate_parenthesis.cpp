
#include "generate_parenthesis.h"
#include <iostream>
#include <sstream>

unsigned long getMaxSupported(int n)
{
  unsigned long maxVal = 0;
  for (int i=0; i<n; ++i)
  {
    // shirt to 2 bits
    maxVal <<= 2;

    // add 0x11 in the end
    maxVal |= 3;
  }

  return maxVal;
}

bool isValidParenthesis(unsigned long value, unsigned int bits)
{
  // 1 -> ) -> +1
  // 0 -> ( -> -1
  int acum = 0;
  unsigned int mask = 1;
  for (int i=0; i<bits; ++i)
  {
    if (value & mask)
    {
      ++acum;
    }
    else
    {
      --acum;
      if (acum < 0)
      {
        return false;
      }
    }
    mask <<= 1;
  }

  return (acum == 0);
}

std::string generateParenthesis(unsigned int value, unsigned int bits)
{
  unsigned int mask = 1;
  mask <<= bits - 1;
  std::stringstream strm;
  while (mask != 0)
  {
    if (value & mask)
      strm << ')';
    else
      strm << '(';

    mask >>= 1;
  }

  return strm.str();
}

std::vector<std::string> generateParenthesis(int n)
{
  std::vector<std::string> res;

  if (n > 32)
  {
    std::cout << "max length supported is 32" << std::endl;
    return res;
  }

  unsigned int maxBits = n*2;
  // 64 bits
  unsigned long maxValue = getMaxSupported(n);
  for (unsigned long curr = 0; curr <= maxValue; ++curr)
  {
    if (isValidParenthesis(curr, maxBits))
    {
      res.push_back(generateParenthesis(curr, maxBits));
    }
  }

  return res;
}

void build(int left, int right, int n, std::string s, std::vector<std::string> &res)
{
  if (s.size() == 2*n)
  {
    res.push_back(s);
    return;
  }

  if (left < n)
    build(left + 1, right, n, s + '(', res);
  if (left > right)
    build(left, right + 1, n, s + ')', res);
}

std::vector<std::string> generateParenthesis2(int n)
{
  std::vector<std::string> res;
  build(0, 0, n, "", res);
  return res;
}

