#include <stdio.h>
int main() {
    char name[50];
    int  age = 0;
    printf("Enter your name:");
    scanf("%s", name);
    printf("Enter your age:");
    scanf("%d", &age);
    printf("- - - - -\n");
    printf("Hello %s \n",name);//TODO: #14 Say hello to user.
    printf("Age = %d \n",age);//TODO: #15 display user their age number plus 1.
    return 0 ;
}//end main function