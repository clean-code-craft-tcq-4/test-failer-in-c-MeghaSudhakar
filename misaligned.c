#include <stdio.h>
#include <assert.h>

int printColorMap() 
{
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    int i = 0, j = 0;
    for(i = 0; i < 5; i++) 
    {
        for(j = 0; j < 5; j++) 
        {
            printf("%d\t\t%s\t\t%s\n", i * 5 + j, majorColor[i], minorColor[j]);
            //printf("STEP 1: i is %d snd j is %d \n", i,j);
        }
        printf("i is %d snd j is %d \n", i,j);
    }
    return i * j;
}

int main() 
{
    int result = printColorMap();
    printf("result is %d\n",result);
    assert(result == 25);
    printf("All is well (maybe!)\n");
    return 0;
}
