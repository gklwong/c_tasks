#include <stdio.h>
#include <stdlib.h>
//
int main(void) {
printf("Memory occupied using the following datatypes:\n");
printf("char         :%2d byte(s)\n",sizeof(char));
printf("short int    :%2d byte(s)\n",sizeof(short int));
printf("int          :%2d byte(s)\n",sizeof(int));
printf("long int     :%2d byte(s)\n",sizeof(long int));
printf("unsigned int :%2d byte(s)\n",sizeof(unsigned int));
printf("float        :%2d byte(s)\n",sizeof(float));
printf("double       :%2d byte(s)\n",sizeof(double));
printf("long double  :%2d byte(s)\n",sizeof(long double));
 
short int a = 32768;
short int b = 65535;

printf("a = %d \n", a);
printf("b = %d \n", b);

}

