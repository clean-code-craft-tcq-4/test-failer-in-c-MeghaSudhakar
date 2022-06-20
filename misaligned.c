#include <stdio.h>
#include <assert.h>

int printColorMap() 
{
      char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
      char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    
      char* store[100] = {};
  
    int i = 0, j = 0;
    for(i = 0; i < 5; i++) 
    {
        for(j = 0; j < 5; j++) 
        {
    
             char* store[0]=majorColor[i];
             char* store[1]=minorColor[j];
            
            printf("%d\t\t%s\t\t%s\n", i * 5 + j, majorColor[i], minorColor[j]);            
        }
        
    }
 
    return i * j;
}

int main() 
{
    int result = printColorMap();
    assert(result == 25);
    printf("All is well (maybe!)\n");
    return 0;
}
