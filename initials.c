#include <stdio.h>
#include <cs50.h>
#include <string.h>


int main(void) 
{

    string name ="";
     
//request user name 
    do
    {
       printf("What is your name? \n");
        
        name = GetString();
        
    }
    
    while(name[0] == '\0'); // \0 is null
    

 //will not work if at start
     char value1 = name[0];
     string x = name;
     int n = strlen(name); 
 
     
        if(value1 >=97 && value1 <= 122 ){
         value1 =value1 -32;
         printf("%c", value1);
          }  else {
           printf("%c", value1);
          }
     
 for (int i = 0; i<n ; i++) {


     
     if(x[i] == 32) {
         
        char initial2 = x[i+1];
         
        if(initial2 >=97 && initial2 <= 122 ){
         initial2 =initial2 -32;
         printf("%c", initial2);
         
          }  else {
              
           printf("%c", x[i+1]);
          }
        
     }
     
  }
 
      printf("\n");
}
