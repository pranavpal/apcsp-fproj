#include <stdio.h>
#include <math.h>
#include "finalproject.h"



int main(int argc, char* argv[])
{
   int i = 0;
   struct coordinatePoint p1, p2;
   float area = 0;
   float distance = 0;
   
 if (argc != 5)
  {
    printf("%s : expected 4 args, please enter four floats\n", argv[0]);
    return 1;
  }

   for (i = 0; i < 4; i++)
{
   if (i == 0)
   {
        int found = sscanf(argv[i+1], "%f", &p1.x);

 if (found != 1)
    {
        printf("Argument %d is not a float\n", i);
        return 1;
    }
 }
if (i == 1)
   {
        int found = sscanf(argv[i+1], "%f", &p1.y);

 if (found != 1)
    {
        printf("Argument %d is not a float\n", i);
        return 1;
    }
}
if (i == 2)
   {
        int found = sscanf(argv[i+1], "%f", &p2.x);
 if (found != 1)
    {
        printf("Argument %d is not a float\n", i);
        return 1;
    }
   }
if (i == 3)
   {
        int found = sscanf(argv[i+1], "%f", &p2.y);
 if (found != 1)
    {
        printf("Argument %d is not a float\n", i);
        return 1;
    }
   }


 distance = calculateDistance(p1, p2);
 area = calculateArea(p1, p2);
   //float gdistance = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
   //float distance = sqrt(gdistance);
  }
   printf("Distance between the said points: %f\n", distance);
   printf("Area of triangle created by line drawn by coordinate inputs: %f\n", area);

}


