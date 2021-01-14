#include <stdio.h>
#include <math.h>

 //areaOfCircle function
float areaOfCircle(float radius)
{
      float area = M_PI * radius * radius;
      return area;
}
int main(int argc, char* argv[])
{
  //checks amount of arguments 
  if (argc < 3)
  {
    printf("Enter two arguments\n");
    //input 
    char input[256];
    float firstradius;
    float endradius; 
  
    printf("Enter Upper Radius\n");
    while (1)
    {
      fgets(input, 256, stdin);
      if (sscanf(input, "%f", &firstradius) == 1) break;
      printf("Please enter a number\n");
    }

    printf("Enter Lower Radius\n");
    while (1)
    {
      fgets(input, 256, stdin);
      if (sscanf(input, "%f", &endradius) == 1) break;
      printf("Please enter a number\n");
    }
  
    if (endradius > firstradius)
    {
    //calculate area and return
        for(float i = firstradius; i <= endradius; i++)
        {
            float a = areaOfCircle(i);
            printf("Area of a circle with a radius of %f is %f\n", i, a);
        }

    } else {
      printf("Input a second radius greater than the first\n");
    }
    return 1;

  } else if (argc > 3) {
    printf("Too many arguments, please enter only two\n");
    return 1;
  }


  //checks if inputs are valid numbers
  float arg1;
  float found = sscanf(argv[1], "%f", &arg1);
  if (found != 1)
  {
    printf("Your input isn't a number, please enter 2 numbers\n");
    return 1;
  }

  float arg2;
  found = sscanf(argv[2], "%f", &arg2);
  if (found != 1)
  {
    printf("Your input isn't a number\n");
    return 1;
  }
//Calculate circle given inputs
  
  for(float i = arg1; i <= arg2; i++)
  {
float a = areaOfCircle(i);
printf("Area of circle with a radius of %f is %f\n", i, a);
  }

}
