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

	   printf("�п�J��%d�쪺�s��,�m�W,���~,�u�@�ɼ�:", j+1); 

       scanf(" %s %s %d %d", emp[j].id, emp[j].yourname, &emp[j].hourly pay, &emp[j].hours);

       j++;

   } while (j<4);

   calc(emp);

   printf("�리�J��G\n");

   for (j=0; j<4; j++)

      printf("�s��%s �m�W�G%s�@�리�J: %d\n",emp[j].id, emp[j].yourname, emp[j].payment);

   system("pause"); 

   return 0;

}


void calc(struct servitor p[])

{
    int j;

    for (j=0; j<4; j++)

       p[j].payment=p[j].hourly pay*p[j].hours;
}
