#include "Box.h"

// Implement setters and getters
void Box::setLength(int l)
{
  length = l;
}

void Box::setWidth(int w)
{
  width = w;
}

void Box::setHeight(int h)
{
  height = h;
}


//getters
int Box::getLength()
{
  return length;
}

int Box::getWidth()
{
  return width;
}

int Box::getHeight()
{
  return height;
}
 

// Implemenet the calcVolume() function
int Box::calcVolume() 
{
  return length * width * height;
}
