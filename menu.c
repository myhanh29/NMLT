#include<stdio.h>
#include <stdlib.h>
 int main()
{
    int a ;
	do
	{
	   system("cls");
    printf("***THI GIUA KY***\n");
    printf("MSSV: 21280015 \n");
    printf("Ho va ten: Nguyen Thu Hien \n");
    printf("He dao tao: Dai tra \n");
    printf("Bai thi gom cac cau sau:\n");
    printf("1.Chuc nang 1:Tinh tong day so n\n");
    printf("2.Chuc nang 2: Kiem tra so chan le \n");
    printf("3.Chuc nang 3:Tim so chia het cho 3 va 7\n");
    printf("4.Chuc nang 4: In so dao nguoc\n");
    printf("5.Chuc nang 5: Ve hinh\n");
    
    printf("Moi ban chon cau (nhan chon bang cach ghi so 1 den 5):\n ");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
         printf("Ban da chon chung nang 1\n");
         printf("Chuc nang 1: Tinh tong day so n \n");
         int n;
         do{
         printf("Moi nhap mot nguyen duong bat ky: \n");
         scanf("%d",&n);
         if (n<0)
         {
          printf("So phai lon hon 0\n");
          scanf("%d",&n);
         }
         }while (n<0);
         int S=0;
         for(int i=1; i<=n; i++)
         {
          S=S+i;
         }
         printf("Tong day so la: %d\n", S);
         break;
        
        case 2:
         printf("Ban da chon chung nang 2\n");
         printf("Chuc nang 2: Kiem tra so chan le\n");
         int k;
         printf("Moi nhap mot so nguyen duong bat ky: \n");
         scanf("%d",&k);
         if (k<0)
         {
          k=k*(-1);
         }
         if (k%2==0)
         {
          printf("So %d la so chan\n",k);
         }
         else
         {
          printf("So %d la so le\n",k);
         }
         break;
        
        case 3:
         printf("Ban da chon chuc nang 3\n");
         printf("Chuc nang 3:Tim so chia het cho 3 va 7\n");
         int b,m;
         printf("Moi nhap so bat dau: \n");
         scanf("%d",&b);
         printf("Moi nhap so ket thuc: \n");
         scanf("%d",&m);
         for (int i=b; i<=m; i++)
         {
          if (i%3==0 && i%7==0)
          {
           printf("%d thoa\n",i);
          }
         }
         break;
         
        case 4:
         printf("Ban da chon chuc nang 4\n");
         printf("Chuc nang 4:In so dao nguoc\n");
         int d, temp;
         do{
         printf("Moi nhap mot so nguyen duong n bat ky: \n");
         scanf("%d",&d);
         if (d<0)
         {
          printf("So phai lon hon 0\n");
         }
         }while(d<0);
         int dao = 0;
         while(d > 0)
         {
          temp = d % 10;
          if (temp==0)
          {
          dao=dao*10+0;
          }
          else
          {
          dao = dao * 10 + temp;
          }
          d = d / 10;
         }
         printf("So dao la: %d\n", dao);
         break;
        
        case 5:
         printf("Ban da chon chuc nang 5\n");
         printf("Chuc nang 5:Ve hinh\n");
         printf("Thay oi thay check code giup con a\n");
        int u, j, g, l;
        u = 9;
        int space = 10, dausao = 1;
        for(g=1;g<=9;g++)
        {
        for(j=1;j<=space;j++)
        {
            printf(" ");
        }
        for(l=1;l<=dausao;l++)
        { 
          printf ("*");
        }
        printf ("\n");
        space--; dausao+=2;
    }
    space = 10; dausao = 1;
   
    for(g=1;g<=9;g++)
    {
        for(j=1;j<=space;j++)
        {
            printf(" ");
        }
        for(l=1;l<=dausao;l++)
        {
            printf ("*");
        }
        printf ("\n");
        space++; dausao-=2;
    }
         break;
        
        default:
         printf("Khong co chuc nang da chon\n");
         break;
    }
    int c ;
    
    printf("Ban co muon tiep tuc khong? (Chon 1 (tuong duong yes) hoac 2 (tuong duong no)):\n ");
   	scanf("%d", &c);
	   switch (c)
	   {
	    case 1:
	     a = -1;
	     break;
	     
	    case 2:
	     printf("Tam biet!\n");
	     break;
	     
	    default:
	      printf("Khong hieu ban chon gi! \n");
	      break;
	   }
	}
	while(a != 1 && a != 2 && a !=3 && a !=4 && a !=5 );
	
}