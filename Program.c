// Write a program the table 1 to 10 using (DO WHILE)


#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1; int j;
    do 
    {   j=1;
        do
        { printf("%d\t",i*j);
          j++;
        }
        while(j<=10);
      printf("\n");   
      i++;
    } while(i<=10);
return 0;
}
