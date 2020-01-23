#include "finalproject.h"
#include <math.h>

float calculateDistance (struct coordinatePoint p1, struct coordinatePoint p2)
 {
   float distance = sqrt(((p2.x - p1.x)*(p2.x - p1.x))+((p2.y - p1.y)*(p2.y - p1.y)));
   return distance;
 };
float calculateArea (struct coordinatePoint p1, struct coordinatePoint p2)
 {
   float area = (((p2.x - p1.x)*(p2.y - p1.y))/2);
   return area;
 };

