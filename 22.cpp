#include <stdio.h> 

#include <stdlib.h>

struct servitor

{
   char id[8],yourname[12];

   int hourly pay,hours,payment;
};

void calc(struct servitor []); 

int main(void)

{

   struct servitor emp[4];

   int j=0;
   

   do { 

	   printf("請輸入第%d位的編號,姓名,時薪,工作時數:", j+1); 

       scanf(" %s %s %d %d", emp[j].id, emp[j].yourname, &emp[j].hourly pay, &emp[j].hours);

       j++;

   } while (j<4);

   calc(emp);

   printf("月收入表：\n");

   for (j=0; j<4; j++)

      printf("編號%s 姓名：%s　月收入: %d\n",emp[j].id, emp[j].yourname, emp[j].payment);

   system("pause"); 

   return 0;

}


void calc(struct servitor p[])

{
    int j;

    for (j=0; j<4; j++)

       p[j].payment=p[j].hourly pay*p[j].hours;
}
