#include <stdio.h>
#include <stdlib.h>
  
int main()
{
    
    FILE* fptr;
    char buffer[100];
    fptr = fopen("gopal.txt", "r");
  
   
    if (fptr == NULL) {
        printf("The file is not opened. The program will "
               "now exit.");
    }
     fread(buffer, sizeof(buffer), 20, fptr);
         printf("%s", buffer);
  
    return 0;
}