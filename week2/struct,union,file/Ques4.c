/*
Write a C program to append content to a file.
*/
#include <stdio.h>
#include <stdlib.h>
int main(void){
    char str[10];
    FILE *fp;
    fp=fopen("Ques4.txt","a");
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