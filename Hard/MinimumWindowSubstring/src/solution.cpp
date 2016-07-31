
#include "solution.h"
#include <iostream>

Solution::Solution()
{
  init();
}
Solution::~Solution()
{

}

std::string Solution::minWindow(const std::string &s, const std::string &t)
{
  initCharsOfT(t);
  initCharsTInGap(t);

  for (unsigned int i=0; i<s.size(); ++i)
  {
    // first part when gap is not filled in
    if (rightEdge == -1)
    {
      if (isPartOfT(s[i]))
      {
        // define lerft edge if not done yet
        if (leftEdge == -1)
        {
          leftEdge = i;
        }

        // increase a presence of a char
        charsTInGap[getCharNdx(s[i])] += 1;

        // if gap is completed, register and go to the next stage - find shortest gap
        if (isGapComplete())
        {
          rightEdge = i;
          moveLeftEdge(s);
          registerGap(s);
        }
      }
    }
    else
    {
      // here we will try to move right but still keep the gap filled

      if (isPartOfT(s[i]))
      {
        // increase a presence of a char
        charsTInGap[getCharNdx(s[i])] +=1;
      }

      // if current char same as left edge - move edge
      if (s[i] == s[leftEdge])
      {
        rightEdge = i;
        moveLeftEdge(s);
        registerGap(s);
      }
    }
  }

  // check if we still can move at the end
  moveLeftEdge(s);
  registerGap(s);

  return result;
}

void Solution::init()
{
  initCharsTable();
  leftEdge = -1;
  rightEdge = -1;
  result = "";
}

void Solution::initCharsTable()
{
  for (unsigned int i=0; i<arrSize; ++i)
  {
    charsOfT[i] = 0;
    charsTInGap[i] = 0;
  }
}

unsigned int Solution::getCharNdx(char ch)
{
  return ch;//-'A';
}

void Solution::initCharsOfT(const std::string &t)
{
  for (unsigned int i=0; i<t.size(); ++i)
  {
    charsOfT[getCharNdx(t[i])] = 1;
  }
}

void Solution::initCharsTInGap(const std::string &t)
{
  for (unsigned int i=0; i<t.size(); ++i)
  {
    charsTInGap[getCharNdx(t[i])] -= 1;
  }
}

bool Solution::isPartOfT(char ch)
{
  return (charsOfT[getCharNdx(ch)] == 1);
}

bool Solution::isGapComplete()
{
  for (unsigned int i=0; i<arrSize; ++i)
  {
    if (charsTInGap[i] < 0)
    {
      return false;
    }
  }

  return true;
}

void Solution::moveLeftEdge(const std::string &s)
{
  while (leftEdge <= rightEdge)
  {
    char ch = s[leftEdge];
    if (isPartOfT(ch))
    {
      // if most left char cant be removed without breaking gaps completeness
      if (charsTInGap[getCharNdx(ch)] == 0)
      {
        break;
      }
      else
      {
        // decrease chars amount
        charsTInGap[getCharNdx(ch)] -= 1;
      }
    }
    ++leftEdge;
  }
}

void Solution::registerGap(const std::string &s)
{

  if (leftEdge == -1 || rightEdge == -1)
    return;

  std::string newResult = s.substr(leftEdge, rightEdge-leftEdge+1);
  if (result.empty())
  {
    result = newResult;
  }
  else
  {
    if (result.size() > newResult.size())
    {
      result = newResult;
    }
  }

  //std::cout << std::endl << '[' << leftEdge << ':' << rightEdge << "] " << result << std::endl;
}