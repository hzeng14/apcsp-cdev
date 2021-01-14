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
  //number of arguments 
  if (argc < 3)
  {
    printf("Please enter two arguments\n");
    // user input 
    char input[256];
    float firstradius;
    float endradius; 
  
    printf("Input upper radius\n");
    while (1)
    {
      fgets(input, 256, stdin);
      if (sscanf(input, "%f", &firstradius) == 1) break;
      printf("Not a valid number\n");
    }

    printf("Input lower radius\n");
    while (1)
    {
      fgets(input, 256, stdin);
      if (sscanf(input, "%f", &endradius) == 1) break;
      printf("Not a valid number\n");
    }
  
    if (endradius > firstradius)
    {
        //calculate the new area
        for(float i = firstradius; i <= endradius; i++)
        {
            float a = areaOfCircle(i);
            printf("Area of a circle with a radius of %f is %f\n", i, a);
        }

    } else {
      printf("Second radius must be greater than first radius\n");
    }
    return 1;

  } else if (argc > 3) {
    printf("Too many arguments, please enter 2 numbers\n");
    return 1;
  }


  //checks to see if inputs are numbers
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
    printf("Your input isn't a number, please enter 2 numbers\n");
    return 1;
  }
  
  //it will take the user input and calcualte area of circle
  
  for(float i = arg1; i <= arg2; i++)
  {
      float a = areaOfCircle(i);
      printf("Area of a circle with a radius of %f is %f\n", i, a);
  }

}
