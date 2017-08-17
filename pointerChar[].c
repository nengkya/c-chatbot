#include <stdio.h>
 
const int MAX = 4;
 
int main()
{
 char names[] = "Zara Ali";

 char* alamatNama = names;
   
 printf("Value of names = %s \n", alamatNama);
   
 return 0;
}