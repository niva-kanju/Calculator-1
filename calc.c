// Header file for input output functions 
#include <stdio.h> 
#include <stdlib.h> /* atoi */ 
  
int add(int a, int b) 
{ 
    return (a + b) ; 
} 

int difference(int a, int b) 
{ 
    return (a - b) ; 
} 

int product(int a, int b) 
{ 
    return (a * b) ; 
} 

int division(int a, int b) 
{ 
    return (a / b) ; 
} 

int main(int argc, char* argv[]) 
{ 
  
    int num1, num2,op,ans; 
 
    if (argc == 1) 
        printf("No command line arguments found.\n"); 
  
    else { 
  
        op   = atoi(argv[1]);
        num1 = atoi(argv[2]); 
        num2 = atoi(argv[3]); 
  switch(op)
  {case 1:ans=add(num1,num2);
          break;
   case 2:ans=difference(num1,num2);
          break;
   case 3:ans=product(num1,num2);
          break;
   case 4:if(num2==0)
   {printf("DIVISION ERROR");}
   else{
   ans=division(num1,num2);
          break;}
   }
   printf("%d\n",ans);
        
    } 
    return 0; 
} 
© 2020 GitHub, Inc.
Terms
Privacy
Security
Status
Help
Contact GitHub
Pricing
API
Training
Blog
About
