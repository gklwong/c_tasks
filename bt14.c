#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* BT14 Me on the Guest List? */
int main()
{    
    FILE *fp;
    fp = fopen("names.txt", "r");
    char names[200][100];
        
    /* Get each name into names[] and replace \n with \0 (NULL) */
    int i=0;
    while((fgets(names[i],sizeof(names[i]), fp)) != NULL) {        

        /*****your code here*****/

        i++;
    }
    fclose(fp);
    
    /*read keyword from the keyboard and remove the line break at the end*/
    printf("Name? ");
    char keyword[BUFSIZ];
    char *p;    
    if (fgets(keyword, sizeof(keyword), stdin) != NULL) {
        if ((p = strchr(keyword, '\n')) != NULL)
            *p = '\0';
    }
        
    /*perform a sequential search and output the line number if found*/

    /*****your code here*****/







    //system("pause");
    return 0;
}




