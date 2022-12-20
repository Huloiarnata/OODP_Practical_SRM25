/*
Write a C program to create a file and write contents, save and close the file.
*/
#include <stdio.h>
#include <stdlib.h>
int main(void){
    char str[10];
    FILE *fp;
    fp=fopen("Ques3.txt","w");
    if (fp==NULL)
    {
        printf("Error in Opening file");
        exit(1);
    }
    printf("Enter the text:\nTo stop Entering control+Z/control+D\n");
    while (gets(str)!= NULL)
    {
        fputs(str,fp);
    }
    

    fclose(fp);
    return 0;
}