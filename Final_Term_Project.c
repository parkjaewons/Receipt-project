#include <stdio.h>
#include<Windows.h>
#include <time.h>

void gotoxy(int x, int y);
void a();
void b();
void c();
void d();
void e();
void f();
void Time();
void Receipt();

int main(void)
{
   int sel;
   int total=0;
   int bell=1;
   int n=0, n1=0,n2=0,n3=0,n4=0,n5=0,n6=0,n7=0;

   printf("\n\n\n===========================\n");
   printf("         SMU COFFEE\n");
   printf("===========================\n");
   printf("\n=====SMU COFFEE �޴���=====\n\n");
   printf("1.�Ƹ޸�ī��      --(2000��)\n\n");
   printf("2.ī���ī        --(4500��)\n\n");
   printf("3.ī���        --(4000��)\n\n");
   printf("4.īǪġ��        --(4800��)\n\n");
   printf("5.ī��� �����ƶ� --(4200��)\n\n");
   printf("6.����������      --(1500��)\n\n");
   printf("7.���̽�Ƽ        --(1500��)\n\n");
   printf("8.���� ��       --(4000��)\n\n");
   printf("9.�ֹ��� ��Ĩ�ϴ�\n\n");
   printf("10.���� ����\n\n");
   printf("11.�ǸſϷ�\n");
 
   while(1)
   {
     printf("\nSelect Menu\n\n> ");
      scanf("%d",&sel);

       switch(sel)
    {
      case 0:
   printf("\n\n\n===========================\n");
   printf("         SMU COFFEE\n");
   printf("===========================\n");
   printf("\n===Ŀ�� ������ �޴���===\n\n");
   printf("1.�Ƹ޸�ī��      --(2000��)\n\n");
   printf("2.ī���ī        --(4500��)\n\n");
   printf("3.ī���        --(4000��)\n\n");
   printf("4.īǪġ��        --(4800��)\n\n");
   printf("5.ī��� �����ƶ� --(4200��)\n\n");
   printf("6.����������      --(1500��)\n\n");
   printf("7.���̽�Ƽ        --(1500��)\n\n");
   printf("8.���� ��       --(4000��)\n\n");
   printf("9.�ֹ��� ��Ĩ�ϴ�\n\n");
   printf("10.���� ����\n\n");
   printf("11.�ǸſϷ�\n");
 
   break;
   case 1:
      n+=1;
      printf("\n�Ƹ޸�ī�븦 %d�������ϼ̽��ϴ�.\n",n);
      printf("�� �ݾ��� (%d��)�Դϴ�.\n",total+=2000);
      break;
   case 2:
      n1+=1;
      printf("\nī�� ��ī�� %d�������ϼ̽��ϴ�.\n",n1);
      printf("�� �ݾ��� (%d��)�Դϴ�.\n",total+=4500);
      break;
   case 3:
      n2+=1;
      printf("\nī�� ������ %d�������ϼ̽��ϴ�.\n",n2);
      printf("�� �ݾ��� (%d��)�Դϴ�.\n",total+=4000);
      break;
   case 4:
      n3+=1;
      printf("\nīǪġ�븦 %d�������ϼ̽��ϴ�.\n",n3);
      printf("�� �ݾ��� (%d��)�Դϴ�.\n",total+=4800);
      break;
   case 5:
      n4+=1;
      printf("\nī��� �����ƶǸ� %d�������ϼ̽��ϴ�.\n",n4);
      printf("�� �ݾ��� (%d��)�Դϴ�.\n",total+=4200);
      break;
   case 6:
      n5+=1;
      printf("\n���������Ҹ� %d�������ϼ̽��ϴ�.\n",n5);
      printf("�� �ݾ��� (%d��)�Դϴ�.\n",total+=1500);
      break;
   case 7:
      n6+=1;
      printf("\n���̽�Ƽ�� %d�������ϼ̽��ϴ�.\n",n6);
      printf("�� �ݾ��� (%d��)�Դϴ�.\n",total+=1500);
      break;
   case 8:
      n7+=1;
      printf("\n���� �󶼸� %d�������ϼ̽��ϴ�.\n",n7);
      printf("�� �ݾ��� (%d��)�Դϴ�.\n",total+=4000);
      break;

   
   case 9:
      Receipt(total,bell,n,n1,n2,n3,n4,n5,n6,n7);
      break;
      
   case 10:   
      system("cls");
      Time(n,n1,n2,n3,n4,n5,n6,n7);
      break;
   case 11:
     system("cls");
      bell+=1;
      total=0;
     n=0;
     n1=0;
     n2=0;
     n3=0;
     n4=0;
     n5=0;
     n6=0;
     n7=0;
     break;
   default:
      printf("\a");
      printf("�߸��� �����Դϴ�.\n");
      printf("�ٽ� �������ֽʽÿ�.\n");
      break;

   }
      if(bell==10)
      {
         printf("�����Դϴ�.\n");
        return 0;
      }
   }
   
}

void gotoxy(int x, int y)
{
   COORD Pos;
   Pos.X = x;
   Pos.Y = y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),Pos);
}

void a()//glass
{

   gotoxy(10,6); printf("��                 ��\n");
   gotoxy(10,7); printf("��                 ��\n");
   gotoxy(10,8); printf("��                 ��\n");
   gotoxy(10,9); printf("��                 ��\n");
   gotoxy(10,10); printf("��                 ��\n");
   gotoxy(10,11); printf("��                 ��\n");
   gotoxy(10,12); printf("��                 ��\n");
   gotoxy(10,13); printf("��                 ��\n");
   gotoxy(10,14); printf("��                 ��\n");
   gotoxy(10,15); printf(" *=================* \n");
}

void b()//ice
{
   gotoxy(10,6); printf("��                 ��\n");
   gotoxy(10,7); printf("��                 ��\n");
   gotoxy(10,8); printf("��                 ��\n");
   gotoxy(10,9); printf("��                 ��\n");
   gotoxy(10,10); printf("��                 ��\n");
   gotoxy(10,11); printf("��                 ��\n");
   gotoxy(10,12); printf("��                 ��\n");
   gotoxy(10,13); printf("��                 ��\n");
   gotoxy(10,14); printf("��      I C E      ��\n");
   gotoxy(10,15); printf(" *=================* \n");
}

void c() //milk
{
   gotoxy(10,6); printf("��                 ��\n");
   gotoxy(10,7); printf("��                 ��\n");
   gotoxy(10,8); printf("��                 ��\n");
   gotoxy(10,9); printf("��                 ��\n");
   gotoxy(10,10); printf("��                 ��\n");
   gotoxy(10,11); printf("��                 ��\n");
   gotoxy(10,12); printf("��                 ��\n");
   gotoxy(10,13); printf("��     M I L K     ��\n");
   gotoxy(10,14); printf("��      I C E      ��\n");
   gotoxy(10,15); printf(" *=================* \n");
}

void d() //milk+esp
{
   gotoxy(10,6); printf("��                 ��\n");
   gotoxy(10,7); printf("��                 ��\n");
   gotoxy(10,8); printf("��                 ��\n");
   gotoxy(10,9); printf("��                 ��\n");
   gotoxy(10,10); printf("��                 ��\n");
   gotoxy(10,11); printf("��                 ��\n");
   gotoxy(10,12); printf("�� E S P R E S S O ��\n");
   gotoxy(10,13); printf("��     M I L K     ��\n");
   gotoxy(10,14); printf("��      I C E      ��\n");
   gotoxy(10,15); printf(" *=================* \n");
}

void e() //water
{
   gotoxy(10,6); printf("��                 ��\n");
   gotoxy(10,7); printf("��                 ��\n");
   gotoxy(10,8); printf("��                 ��\n");
   gotoxy(10,9); printf("��                 ��\n");
   gotoxy(10,10); printf("��                 ��\n");
   gotoxy(10,11); printf("��                 ��\n");
   gotoxy(10,12); printf("��                 ��\n");
   gotoxy(10,13); printf("��    W A T E R    ��\n");
   gotoxy(10,14); printf("��      I C E      ��\n");
   gotoxy(10,15); printf(" *=================* \n");
}

void f() //water+espresso
{
   gotoxy(10,6); printf("��                 ��\n");
   gotoxy(10,7); printf("��                 ��\n");
   gotoxy(10,8); printf("��                 ��\n");
   gotoxy(10,9); printf("��                 ��\n");
   gotoxy(10,10); printf("��                 ��\n");
   gotoxy(10,11); printf("��                 ��\n");
   gotoxy(10,12); printf("�� E S P R E S S O ��\n");
   gotoxy(10,13); printf("��    W A T E R    ��\n");
   gotoxy(10,14); printf("��      I C E      ��\n");
   gotoxy(10,15); printf(" *=================* \n");
}

void g() //ī���
{
   gotoxy(10,6); printf("��                 ��\n");
   gotoxy(10,7); printf("��                 ��\n");
   gotoxy(10,8); printf("��                 ��\n");
   gotoxy(10,9); printf("��                 ��\n");
   gotoxy(10,10); printf("��                 ��\n");
   gotoxy(10,11); printf("�� M I L K F O A M ��\n");
   gotoxy(10,12); printf("�� E S P R E S S O ��\n");
   gotoxy(10,13); printf("��    W A T E R    ��\n");
   gotoxy(10,14); printf("��      I C E      ��\n");
   gotoxy(10,15); printf(" *=================* \n");
}

void h() //�����ƶ�
{
   gotoxy(10,6); printf("��                 ��\n");
   gotoxy(10,7); printf("��                 ��\n");
   gotoxy(10,8); printf("��                 ��\n");
   gotoxy(10,9); printf("��                 ��\n");
   gotoxy(10,10); printf("��                 ��\n");
   gotoxy(10,11); printf("��    S Y R U P    ��\n");
   gotoxy(10,12); printf("�� E S P R E S S O ��\n");
   gotoxy(10,13); printf("��     M I L K     ��\n");
   gotoxy(10,14); printf("��      I C E      ��\n");
   gotoxy(10,15); printf(" *=================* \n");
}
void j() //�����ƶ�+��
{
   gotoxy(10,6); printf("��                 ��\n");
   gotoxy(10,7); printf("��                 ��\n");
   gotoxy(10,8); printf("��                 ��\n");
   gotoxy(10,9); printf("��                 ��\n");
   gotoxy(10,10); printf("�� M I L K F O A M ��\n");
   gotoxy(10,11); printf("��    S Y R U P    ��\n");
   gotoxy(10,12); printf("�� E S P R E S S O ��\n");
   gotoxy(10,13); printf("��     M I L K     ��\n");
   gotoxy(10,14); printf("��      I C E      ��\n");
   gotoxy(10,15); printf(" *=================* \n");
}

void k() //����������
{
   gotoxy(10,6); printf("��                 ��\n");
   gotoxy(10,7); printf("��                 ��\n");
   gotoxy(10,8); printf("��                 ��\n");
   gotoxy(10,9); printf("��                 ��\n");
   gotoxy(10,10); printf("��                 ��\n");
   gotoxy(10,11); printf("��                 ��\n");
   gotoxy(10,12); printf("��                 ��\n");
   gotoxy(10,13); printf("��                 ��\n");
   gotoxy(10,14); printf("�� E S P R E S S O ��\n");
   gotoxy(10,15); printf(" *=================* \n");
}
void l() //���̽�Ƽ
{
   gotoxy(10,6); printf("��                 ��\n");
   gotoxy(10,7); printf("��                 ��\n");
   gotoxy(10,8); printf("��                 ��\n");
   gotoxy(10,9); printf("��                 ��\n");
   gotoxy(10,10); printf("��                 ��\n");
   gotoxy(10,11); printf("��                 ��\n");
   gotoxy(10,12); printf("��   P O W D E R   ��\n");
   gotoxy(10,13); printf("��    W A T E R    ��\n");
   gotoxy(10,14); printf("��      I C E      ��\n");
   gotoxy(10,15); printf(" *=================* \n");
}
void Time(int n, int n1,int n2,int n3,int n4,int n5,int n6,int n7)
{
   int i;
   int sel;
   printf("����?\n\n1.�Ƹ޸�ī  2.ī���ī  3.ī���  4.īǪġ��  5.ī��� �����ƶ�  6.����������  7.���̽�Ƽ  8.������\n\n");
   scanf("%d", &sel);
   if(sel==1)
   {
      for(i=0; i<n; i++)
      {
           printf("\n\n�Ƹ޸�ī��\n\n");
           Sleep(500);
           system("cls");
           a();
           Sleep(500);
           system("cls");
           b();
           Sleep(500);
           system("cls");
           e();
           Sleep(500);
           system("cls");
           f();
           Sleep(500);
         printf("\a");
         printf("\n�ֹ��Ͻ� �Ƹ޸�ī�밡 �غ�Ǿ����ϴ�. ���ְ� �弼��!\n\n\n");
      }
    
   }
   else if(sel==2)
   {
      for(i=0; i<n1; i++)
      {
           printf("\n\nī���ī\n\n");
           Sleep(500);

           system("cls");
           a();
           Sleep(500);
           system("cls");
           b();
           Sleep(500);
           system("cls");
           c();
           Sleep(500);
           system("cls");
           d();
           Sleep(500);
         printf("\a");
         printf("\n�ֹ��Ͻ� ī���ī�� �غ�Ǿ����ϴ�. ���ְ� �弼��!\n\n\n");
      }   
     
   }
   else if(sel==3)
   {
      for(i=0; i<n2; i++)
      {

         printf("\n\nī���\n\n");
           Sleep(500);
           system("cls");
           a();
           Sleep(500);
           system("cls");
           b();
           Sleep(500);
           system("cls");
           c();
           Sleep(500);
           system("cls");
           d();
           Sleep(500);
         printf("\a");
         printf("\n�ֹ��Ͻ� ī��󶼰� �غ�Ǿ����ϴ�. ���ְ� �弼��!\n\n\n");
      }
      
   }
   else if(sel==4)
   {
      for(i=0; i<n3; i++)
      {
         printf("\n\nīǪġ��\n\n");
         Sleep(500);
         system("cls");
         a();
         Sleep(500);
         system("cls");
         b();
         Sleep(500);
         system("cls");
         e();
         Sleep(500);
         system("cls");
         f();
         Sleep(500);
         system("cls");
         g();
         Sleep(500);
         printf("\a");
         printf("\n�ֹ��Ͻ� īǪġ�밡 �غ�Ǿ����ϴ�. ���ְ� �弼��!\n\n\n");
      }
   }
   else if(sel==5)
   {
       for(i=0; i<n4; i++)
      {
         printf("\n\nī��� �����ƶ�\n\n");
         Sleep(500);
         system("cls");
         a();
         Sleep(500);
         system("cls");
         b();
         Sleep(500);
         system("cls");
         c();
         Sleep(500);
         system("cls");
         d();
         Sleep(500);
         system("cls");
         h();
         Sleep(500);
         system("cls");
         j();
         Sleep(500);
         printf("\a");
         printf("\n�ֹ��Ͻ� ī��� �����ƶǰ� �غ�Ǿ����ϴ�. ���ְ� �弼��!\n\n\n");
      }
   }
   else if(sel==6)
   {
      for(i=0; i<n5; i++)
      {
         printf("\n\n����������\n\n");
         Sleep(500);
         system("cls");
         a();
         Sleep(500);
         system("cls");
         k();
         Sleep(500);
         printf("\a");
         printf("\n�ֹ��Ͻ� ���������Ұ� �غ�Ǿ����ϴ�. ���ְ� �弼��!\n\n\n");
      }
   }
   else if(sel==7)
   {
      for(i=0; i<n6; i++)
      {
         printf("\n\n���̽�Ƽ\n\n");
         Sleep(500);
         system("cls");
         a();
         Sleep(500);
         system("cls");
         b();
         Sleep(500);
         system("cls");
         e();
         Sleep(500);
         system("cls");
         l();
         Sleep(500);
         printf("\a");
         printf("\n�ֹ��Ͻ� ���������Ұ� �غ�Ǿ����ϴ�. ���ְ� �弼��!\n\n\n");
      }

     
   }
   else if(sel==8)
   {
      for(i=0; i<n7; i++)
      {
         printf("���� ��\n\n");
         Sleep(500);
         system("cls");
         a();
         Sleep(500);
         system("cls");
         b();
         Sleep(500);
         system("cls");
         e();
         Sleep(500);
         system("cls");
         l();
         Sleep(500);
         printf("\a");
         printf("\n�ֹ��Ͻ� ���������Ұ� �غ�Ǿ����ϴ�. ���ְ� �弼��!\n\n\n");
      }
   } 
   else
      printf("\n\n�߸��Է��ϼ̽��ϴ�. �ٽ� �Է����ּ���. \n\n");
      
}

void Receipt(int total,int bell,int n,int n1,int n2,int n3,int n4,int n5,int n6,int n7) //������
{
   time_t timer;
   struct tm *t;
   int pn;
   int tt;
   int phone;
    timer = time(NULL); // ���� �ð��� �� ������ ���

   t = localtime(&timer);

     tt=total*0.912;
     printf("���ݿ������� �߱��Ͻðڽ��ϱ�?  yes=1/no=2:\n\n");
     scanf("%d", &pn);
     if(pn==1)
         {
             printf("�޴��� ��ȣ �Է�: ");
             scanf("%d",&phone);
         }
    
     printf("\n            SMU COFFEE\n");
     printf("����(�ҵ����)\n");
     printf("õ�Ⱦȼ�DT��   �泲 õ�Ƚ� ����� 31\n");
     printf("��ǥ:ȫ���� 201-81-21515 T:041-123-4567\n");
     printf("[POS 01]               %d-%d-%d %d:%d:%d\n",t->tm_year + 1900,t->tm_mon + 1, t->tm_mday,t->tm_hour, t->tm_min,t->tm_sec);
     printf("---------------------------------------\n");
     printf("            �ֹ���ȣ: %d\n", bell);
     printf("---------------------------------------\n");
     if(n!=0)
        printf("�Ƹ޸�ī��     2,000��  %d   %d\n",n,2000*n);
     if(n1!=0)
        printf("ī�� ��ī      4,500��  %d   %d\n",n1,4500*n1);
     if(n2!=0)
        printf("ī�� ����      4,000��  %d   %d\n",n2,4000*n2);
    if(n2!=0)
        printf("īǪġ��       4,800��  %d   %d\n",n3,4800*n3);
    if(n2!=0)  
        printf("ī��� �����ƶ�4,200��  %d   %d\n",n4,4200*n4);
    if(n2!=0)
        printf("����������     1,500��  %d   %d\n",n5,1500*n5);
    if(n2!=0)
        printf("���̽�Ƽ       1,500��  %d   %d\n",n6,1500*n6);
    if(n2!=0)
        printf("���� ��      1,500��  %d   %d\n",n7,4000*n7);
     printf("---------------------------------------\n");
     printf("subtotal                ->      %d\n",total);
     printf("NET Amount              ->      %d\n",tt);
     printf("Tax                     ->      %d\n",total-tt);
     printf("---------------------------------------\n");
     printf("TOTAL                            %d\n",total);
    if(pn==1)
    {
        printf("���ݿ�����:                 010%d\n\n",phone);//�ذ�
    }
    else
    {
       printf("���ݿ�����:                 010****5678\n\n");
    }
}#include <stdio.h>
#include<Windows.h>
#include <time.h>

void gotoxy(int x, int y);

void Time();
void Receipt();

int main(void)
{
   int sel;
   int total=0;
   int bell=1;
   int n=0, n1=0,n2=0,n3=0,n4=0,n5=0,n6=0,n7=0;

   printf("\n\n\n===========================\n");
   printf("         SMU COFFEE\n");
   printf("===========================\n");
   printf("\n=====SMU COFFEE �޴���=====\n\n");
   printf("1.�Ƹ޸�ī��      --(2000��)\n\n");
   printf("2.ī���ī        --(4500��)\n\n");
   printf("3.ī���        --(4000��)\n\n");
   printf("4.īǪġ��        --(4800��)\n\n");
   printf("5.ī��� �����ƶ� --(4200��)\n\n");
   printf("6.����������      --(1500��)\n\n");
   printf("7.���̽�Ƽ        --(1500��)\n\n");
   printf("8.���� ��       --(4000��)\n\n");
   printf("9.�ֹ��� ��Ĩ�ϴ�\n\n");
   printf("10.���� ����\n\n");
   printf("11.�ǸſϷ�\n");
 
   while(1)
   {
	  printf("\nSelect Menu\n\n> ");
      scanf("%d",&sel);

       switch(sel)
    {
	   case 0:
   printf("\n\n\n===========================\n");
   printf("         SMU COFFEE\n");
   printf("===========================\n");
   printf("\n===Ŀ�� ������ �޴���===\n\n");
   printf("1.�Ƹ޸�ī��      --(2000��)\n\n");
   printf("2.ī���ī        --(4500��)\n\n");
   printf("3.ī���        --(4000��)\n\n");
   printf("4.īǪġ��        --(4800��)\n\n");
   printf("5.ī��� �����ƶ� --(4200��)\n\n");
   printf("6.����������      --(1500��)\n\n");
   printf("7.���̽�Ƽ        --(1500��)\n\n");
   printf("8.���� ��       --(4000��)\n\n");
   printf("9.�ֹ��� ��Ĩ�ϴ�\n\n");
   printf("10.���� ����\n\n");
   printf("11.�ǸſϷ�\n");
 
   break;
   case 1:
      n+=1;
      printf("\n�Ƹ޸�ī�븦 %d�������ϼ̽��ϴ�.\n",n);
      printf("�� �ݾ��� (%d��)�Դϴ�.\n",total+=2000);
      break;
   case 2:
      n1+=1;
      printf("\nī�� ��ī�� %d�������ϼ̽��ϴ�.\n",n1);
      printf("�� �ݾ��� (%d��)�Դϴ�.\n",total+=4500);
      break;
   case 3:
      n2+=1;
      printf("\nī�� ������ %d�������ϼ̽��ϴ�.\n",n2);
      printf("�� �ݾ��� (%d��)�Դϴ�.\n",total+=4000);
      break;
   case 4:
	   n3+=1;
	   printf("\nīǪġ�븦 %d�������ϼ̽��ϴ�.\n",n3);
	   printf("�� �ݾ��� (%d��)�Դϴ�.\n",total+=4800);
	   break;
   case 5:
	   n4+=1;
	   printf("\nī��� �����ƶǸ� %d�������ϼ̽��ϴ�.\n",n4);
	   printf("�� �ݾ��� (%d��)�Դϴ�.\n",total+=4200);
	   break;
   case 6:
	   n5+=1;
	   printf("\n���������Ҹ� %d�������ϼ̽��ϴ�.\n",n5);
	   printf("�� �ݾ��� (%d��)�Դϴ�.\n",total+=1500);
	   break;
   case 7:
	   n6+=1;
	   printf("\n���̽�Ƽ�� %d�������ϼ̽��ϴ�.\n",n6);
	   printf("�� �ݾ��� (%d��)�Դϴ�.\n",total+=1500);
	   break;
   case 8:
	   n7+=1;
	   printf("\n���� �󶼸� %d�������ϼ̽��ϴ�.\n",n7);
	   printf("�� �ݾ��� (%d��)�Դϴ�.\n",total+=4000);
	   break;

   
   case 9:
	   Receipt(total,bell,n,n1,n2,n3,n4,n5,n6,n7);
	   break;
      
   case 10:   
      system("cls");
      Time(n,n1,n2,n3,n4,n5,n6,n7);
      break;
   case 11:
	  system("cls");
      bell+=1;
      total=0;
	  n=0;
	  n1=0;
	  n2=0;
	  n3=0;
	  n4=0;
	  n5=0;
	  n6=0;
	  n7=0;
	  break;
   default:
      printf("\a");
      printf("�߸��� �����Դϴ�.\n");
      printf("�ٽ� �������ֽʽÿ�.\n");
      break;

   }
	   if(bell==10)
	   {
         printf("�����Դϴ�.\n");
	     return 0;
	   }
   }
   
}

void gotoxy(int x, int y)
{
   COORD Pos;
   Pos.X = x;
   Pos.Y = y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),Pos);
}

void a()//glass
{

   gotoxy(10,6); printf("��                 ��\n");
   gotoxy(10,7); printf("��                 ��\n");
   gotoxy(10,8); printf("��                 ��\n");
   gotoxy(10,9); printf("��                 ��\n");
   gotoxy(10,10); printf("��                 ��\n");
   gotoxy(10,11); printf("��                 ��\n");
   gotoxy(10,12); printf("��                 ��\n");
   gotoxy(10,13); printf("��                 ��\n");
   gotoxy(10,14); printf("��                 ��\n");
   gotoxy(10,15); printf(" *=================* \n");
}

void b()//ice
{
   gotoxy(10,6); printf("��                 ��\n");
   gotoxy(10,7); printf("��                 ��\n");
   gotoxy(10,8); printf("��                 ��\n");
   gotoxy(10,9); printf("��                 ��\n");
   gotoxy(10,10); printf("��                 ��\n");
   gotoxy(10,11); printf("��                 ��\n");
   gotoxy(10,12); printf("��                 ��\n");
   gotoxy(10,13); printf("��                 ��\n");
   gotoxy(10,14); printf("��      I C E      ��\n");
   gotoxy(10,15); printf(" *=================* \n");
}

void c() //milk
{
   gotoxy(10,6); printf("��                 ��\n");
   gotoxy(10,7); printf("��                 ��\n");
   gotoxy(10,8); printf("��                 ��\n");
   gotoxy(10,9); printf("��                 ��\n");
   gotoxy(10,10); printf("��                 ��\n");
   gotoxy(10,11); printf("��                 ��\n");
   gotoxy(10,12); printf("��                 ��\n");
   gotoxy(10,13); printf("��     M I L K     ��\n");
   gotoxy(10,14); printf("��      I C E      ��\n");
   gotoxy(10,15); printf(" *=================* \n");
}

void d() //milk+esp
{
   gotoxy(10,6); printf("��                 ��\n");
   gotoxy(10,7); printf("��                 ��\n");
   gotoxy(10,8); printf("��                 ��\n");
   gotoxy(10,9); printf("��                 ��\n");
   gotoxy(10,10); printf("��                 ��\n");
   gotoxy(10,11); printf("��                 ��\n");
   gotoxy(10,12); printf("�� E S P R E S S O ��\n");
   gotoxy(10,13); printf("��     M I L K     ��\n");
   gotoxy(10,14); printf("��      I C E      ��\n");
   gotoxy(10,15); printf(" *=================* \n");
}

void e() //water
{
   gotoxy(10,6); printf("��                 ��\n");
   gotoxy(10,7); printf("��                 ��\n");
   gotoxy(10,8); printf("��                 ��\n");
   gotoxy(10,9); printf("��                 ��\n");
   gotoxy(10,10); printf("��                 ��\n");
   gotoxy(10,11); printf("��                 ��\n");
   gotoxy(10,12); printf("��                 ��\n");
   gotoxy(10,13); printf("��    W A T E R    ��\n");
   gotoxy(10,14); printf("��      I C E      ��\n");
   gotoxy(10,15); printf(" *=================* \n");
}

void f() //water+espresso
{
   gotoxy(10,6); printf("��                 ��\n");
   gotoxy(10,7); printf("��                 ��\n");
   gotoxy(10,8); printf("��                 ��\n");
   gotoxy(10,9); printf("��                 ��\n");
   gotoxy(10,10); printf("��                 ��\n");
   gotoxy(10,11); printf("��                 ��\n");
   gotoxy(10,12); printf("�� E S P R E S S O ��\n");
   gotoxy(10,13); printf("��    W A T E R    ��\n");
   gotoxy(10,14); printf("��      I C E      ��\n");
   gotoxy(10,15); printf(" *=================* \n");
}

void g() //ī���
{
   gotoxy(10,6); printf("��                 ��\n");
   gotoxy(10,7); printf("��                 ��\n");
   gotoxy(10,8); printf("��                 ��\n");
   gotoxy(10,9); printf("��                 ��\n");
   gotoxy(10,10); printf("��                 ��\n");
   gotoxy(10,11); printf("�� M I L K F O A M ��\n");
   gotoxy(10,12); printf("�� E S P R E S S O ��\n");
   gotoxy(10,13); printf("��    W A T E R    ��\n");
   gotoxy(10,14); printf("��      I C E      ��\n");
   gotoxy(10,15); printf(" *=================* \n");
}

void h() //�����ƶ�
{
   gotoxy(10,6); printf("��                 ��\n");
   gotoxy(10,7); printf("��                 ��\n");
   gotoxy(10,8); printf("��                 ��\n");
   gotoxy(10,9); printf("��                 ��\n");
   gotoxy(10,10); printf("��                 ��\n");
   gotoxy(10,11); printf("��    S Y R U P    ��\n");
   gotoxy(10,12); printf("�� E S P R E S S O ��\n");
   gotoxy(10,13); printf("��     M I L K     ��\n");
   gotoxy(10,14); printf("��      I C E      ��\n");
   gotoxy(10,15); printf(" *=================* \n");
}
void j() //�����ƶ�+��
{
   gotoxy(10,6); printf("��                 ��\n");
   gotoxy(10,7); printf("��                 ��\n");
   gotoxy(10,8); printf("��                 ��\n");
   gotoxy(10,9); printf("��                 ��\n");
   gotoxy(10,10); printf("�� M I L K F O A M ��\n");
   gotoxy(10,11); printf("��    S Y R U P    ��\n");
   gotoxy(10,12); printf("�� E S P R E S S O ��\n");
   gotoxy(10,13); printf("��     M I L K     ��\n");
   gotoxy(10,14); printf("��      I C E      ��\n");
   gotoxy(10,15); printf(" *=================* \n");
}

void k() //����������
{
   gotoxy(10,6); printf("��                 ��\n");
   gotoxy(10,7); printf("��                 ��\n");
   gotoxy(10,8); printf("��                 ��\n");
   gotoxy(10,9); printf("��                 ��\n");
   gotoxy(10,10); printf("��                 ��\n");
   gotoxy(10,11); printf("��                 ��\n");
   gotoxy(10,12); printf("��                 ��\n");
   gotoxy(10,13); printf("��                 ��\n");
   gotoxy(10,14); printf("�� E S P R E S S O ��\n");
   gotoxy(10,15); printf(" *=================* \n");
}
void l() //���̽�Ƽ
{
   gotoxy(10,6); printf("��                 ��\n");
   gotoxy(10,7); printf("��                 ��\n");
   gotoxy(10,8); printf("��                 ��\n");
   gotoxy(10,9); printf("��                 ��\n");
   gotoxy(10,10); printf("��                 ��\n");
   gotoxy(10,11); printf("��                 ��\n");
   gotoxy(10,12); printf("��   P O W D E R   ��\n");
   gotoxy(10,13); printf("��    W A T E R    ��\n");
   gotoxy(10,14); printf("��      I C E      ��\n");
   gotoxy(10,15); printf(" *=================* \n");
}
void Time(int n, int n1,int n2,int n3,int n4,int n5,int n6,int n7)
{
   int i;
   int sel;
   printf("����?\n\n1.�Ƹ޸�ī  2.ī���ī  3.ī���  4.īǪġ��  5.ī��� �����ƶ�  6.����������  7.���̽�Ƽ  8.������\n\n");
   scanf("%d", &sel);
   if(sel==1)
   {
	   for(i=0; i<n; i++)
	   {
           printf("\n\n�Ƹ޸�ī��\n\n");
           Sleep(500);
           system("cls");
           a();
           Sleep(500);
           system("cls");
           b();
           Sleep(500);
           system("cls");
           e();
           Sleep(500);
           system("cls");
           f();
           Sleep(500);
		   printf("\a");
		   printf("\n�ֹ��Ͻ� �Ƹ޸�ī�밡 �غ�Ǿ����ϴ�. ���ְ� �弼��!\n\n\n");
	   }
	 
   }
   else if(sel==2)
   {
	   for(i=0; i<n1; i++)
	   {
           printf("\n\nī���ī\n\n");
           Sleep(500);

           system("cls");
           a();
           Sleep(500);
           system("cls");
           b();
           Sleep(500);
           system("cls");
           c();
           Sleep(500);
           system("cls");
           d();
           Sleep(500);
		   printf("\a");
		   printf("\n�ֹ��Ͻ� ī���ī�� �غ�Ǿ����ϴ�. ���ְ� �弼��!\n\n\n");
	   }   
	  
   }
   else if(sel==3)
   {
	   for(i=0; i<n2; i++)
	   {

		   printf("\n\nī���\n\n");
           Sleep(500);
           system("cls");
           a();
           Sleep(500);
           system("cls");
           b();
           Sleep(500);
           system("cls");
           c();
           Sleep(500);
           system("cls");
           d();
           Sleep(500);
		   printf("\a");
		   printf("\n�ֹ��Ͻ� ī��󶼰� �غ�Ǿ����ϴ�. ���ְ� �弼��!\n\n\n");
	   }
	   
   }
   else if(sel==4)
   {
	   for(i=0; i<n3; i++)
	   {
		   printf("\n\nīǪġ��\n\n");
		   Sleep(500);
		   system("cls");
		   a();
		   Sleep(500);
		   system("cls");
		   b();
		   Sleep(500);
		   system("cls");
		   e();
		   Sleep(500);
		   system("cls");
		   f();
		   Sleep(500);
		   system("cls");
		   g();
		   Sleep(500);
		   printf("\a");
		   printf("\n�ֹ��Ͻ� īǪġ�밡 �غ�Ǿ����ϴ�. ���ְ� �弼��!\n\n\n");
	   }
   }
   else if(sel==5)
   {
	    for(i=0; i<n4; i++)
		{
		   printf("\n\nī��� �����ƶ�\n\n");
		   Sleep(500);
		   system("cls");
		   a();
		   Sleep(500);
		   system("cls");
		   b();
		   Sleep(500);
		   system("cls");
		   c();
		   Sleep(500);
		   system("cls");
		   d();
		   Sleep(500);
		   system("cls");
		   h();
		   Sleep(500);
		   system("cls");
		   j();
		   Sleep(500);
		   printf("\a");
		   printf("\n�ֹ��Ͻ� ī��� �����ƶǰ� �غ�Ǿ����ϴ�. ���ְ� �弼��!\n\n\n");
		}
   }
   else if(sel==6)
   {
	   for(i=0; i<n5; i++)
	   {
		   printf("\n\n����������\n\n");
		   Sleep(500);
		   system("cls");
		   a();
		   Sleep(500);
		   system("cls");
		   k();
		   Sleep(500);
		   printf("\a");
		   printf("\n�ֹ��Ͻ� ���������Ұ� �غ�Ǿ����ϴ�. ���ְ� �弼��!\n\n\n");
	   }
   }
   else if(sel==7)
   {
	   for(i=0; i<n6; i++)
	   {
		   printf("\n\n���̽�Ƽ\n\n");
		   Sleep(500);
		   system("cls");
		   a();
		   Sleep(500);
		   system("cls");
		   b();
		   Sleep(500);
		   system("cls");
		   e();
		   Sleep(500);
		   system("cls");
		   l();
		   Sleep(500);
		   printf("\a");
		   printf("\n�ֹ��Ͻ� ���������Ұ� �غ�Ǿ����ϴ�. ���ְ� �弼��!\n\n\n");
	   }

	  
   }
   else if(sel==8)
   {
	   for(i=0; i<n7; i++)
	   {
		   printf("���� ��\n\n");
		   Sleep(500);
		   system("cls");
		   a();
		   Sleep(500);
		   system("cls");
		   b();
		   Sleep(500);
		   system("cls");
		   e();
		   Sleep(500);
		   system("cls");
		   l();
		   Sleep(500);
		   printf("\a");
		   printf("\n�ֹ��Ͻ� ���������Ұ� �غ�Ǿ����ϴ�. ���ְ� �弼��!\n\n\n");
	   }
   } 
   else
      printf("\n\n�߸��Է��ϼ̽��ϴ�. �ٽ� �Է����ּ���. \n\n");
      
}

void Receipt(int total,int bell,int n,int n1,int n2,int n3,int n4,int n5,int n6,int n7) //������
{
   time_t timer;
   struct tm *t;
   int pn;
   int tt;
   int phone;
    timer = time(NULL); // ���� �ð��� �� ������ ���

   t = localtime(&timer);

     tt=total*0.912;
     printf("���ݿ������� �߱��Ͻðڽ��ϱ�?  yes=1/no=2:\n\n");
     scanf("%d", &pn);
	  if(pn==1)
         {
             printf("�޴��� ��ȣ �Է�: ");
             scanf("%d",&phone);
         }
	 
     printf("\n            SMU COFFEE\n");
     printf("����(�ҵ����)\n");
     printf("õ�Ⱦȼ�DT��   �泲 õ�Ƚ� ����� 31\n");
     printf("��ǥ:ȫ���� 201-81-21515 T:041-123-4567\n");
     printf("[POS 01]               %d-%d-%d %d:%d:%d\n",t->tm_year + 1900,t->tm_mon + 1, t->tm_mday,t->tm_hour, t->tm_min,t->tm_sec);
     printf("---------------------------------------\n");
     printf("            �ֹ���ȣ: %d\n", bell);
     printf("---------------------------------------\n");
     if(n!=0)
        printf("�Ƹ޸�ī��     2,000��  %d   %d\n",n,2000*n);
     if(n1!=0)
        printf("ī�� ��ī      4,500��  %d   %d\n",n1,4500*n1);
     if(n2!=0)
        printf("ī�� ����      4,000��  %d   %d\n",n2,4000*n2);
	 if(n2!=0)
        printf("īǪġ��       4,800��  %d   %d\n",n3,4800*n3);
	 if(n2!=0)  
        printf("ī��� �����ƶ�4,200��  %d   %d\n",n4,4200*n4);
	 if(n2!=0)
        printf("����������     1,500��  %d   %d\n",n5,1500*n5);
	 if(n2!=0)
        printf("���̽�Ƽ       1,500��  %d   %d\n",n6,1500*n6);
	 if(n2!=0)
        printf("���� ��      1,500��  %d   %d\n",n7,4000*n7);
     printf("---------------------------------------\n");
     printf("subtotal                ->      %d\n",total);
     printf("NET Amount              ->      %d\n",tt);
     printf("Tax                     ->      %d\n",total-tt);
     printf("---------------------------------------\n");
     printf("TOTAL                            %d\n",total);
	 if(pn==1)
	 {
	     printf("���ݿ�����:                 010%d\n\n",phone);//�ذ�
	 }
	 else
	 {
		 printf("���ݿ�����:                 010****5678\n\n");
	 }
}
