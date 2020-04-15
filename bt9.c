#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num[5];
    int length_of_array = 0;
    float sum, average, max, min;

    /* Print basic information about the array */
    printf("---------------------------------------\n");
    printf("Size of array num[]:\t%2d bytes\n", sizeof(num));
    printf("Size of each element:\t%2d bytes\n", sizeof(num[0]));

    length_of_array = sizeof(num)/sizeof(num[0]);
    printf("The array num[] has %d elements\n",length_of_array);
    printf("---------------------------------------\n\n");


    /* Print basic information about the array */
    printf("Getting numbers into the array...\n\n");

    int i;
    for (i=0; i<length_of_array; i++) {
        printf("num[%d] = ", i);
        scanf("%f", &num[i]);
    }

    printf("\nContent stored in the array...\n");
    printf("---------------------------------------\n");

    /* Your code to display the output */

    printf("\n---------------------------------------\n");

    
    /* Your code to display the output */
   
   


    //system("pause");
    return 0;
}