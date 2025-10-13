#include <stdio.h>
/*Q28: Write a program to print the product of even numbers from 1 to n.*/
   int main(){ int k , h = 1 , product = 1;
               printf("Enter the number up until you wish multiply the even numbers\n");
               scanf("%d" , &k);
               while(h < k)
               {
                 if (h % 2 == 0)
                 {
                    product *= h;
                 }
                 h += 1;
               }
               printf("%d" , product);
               return 0;












   }
