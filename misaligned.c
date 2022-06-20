#include <stdio.h>
#include <assert.h>

int printColorMap() 
{
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
     char PrintBuffer[25] = {};
    int number = 0;
    int i = 0, j = 0;
    for(i = 0; i < 5; i++) 
    {
        for(j = 0; j < 5; j++) 
        {
            PrintBuffer[number++] = majorColor[i];
            PrintBuffer[number++] = majorColor[j];
            
            printf("%d\t\t%s\t\t%s\n", i * 5 + j, majorColor[i], minorColor[j]);            
        }
        
    }
   // for(i = 0; i < 25; i++) 
  // printf("new array is %s\n",PrintBuffer[i]);
    
    return i * j;
}

int main() 
{
    int result = printColorMap();
    assert(result == 25);
    printf("All is well (maybe!)\n");
    return 0;
}
