#include<conio.h>
#include<stdio.h>


typedef struct
{
char Ten[30];
int NamXB;
char TenTG[120];
int Giatien;
int Luongsach;
}
Sach;
void nhapDuLieu(Sach book[] ,int *N)
{
int i;
do{
        printf("nhap vao so sach: ");
        scanf("%d",&*N);
}while (*N<0||*N>50);
for (i=1;i<=*N;i++)
{
        printf("\nnhap thong tin cho quyen sach thu %d:",i);
        printf("\nTen sach: ");
        fflush(stdin);gets(book[i].Ten);
        printf("Nam xuat ban: ");
        scanf("%d",&book[i].NamXB);
        printf("\nTen tac gia: ");
        fflush(stdin);gets(book[i].TenTG);
        printf("\nGia tien: ");
        scanf("%d",&book[i].Giatien);
        printf("\nTong so luong sach: ");
        scanf("%d",&book[i].Luongsach);


}
}
void xuatDuLieu(Sach book[], int N)
 {
        int i;
        
        for(i=1;i<=N;i++)
        

printf("\nThong tin Nhan Vien vua nhap la: ");
        printf("\n|       Ten sach         |  NamXB  |     Ten tac gia        |  Gia tien  |  LS |");
        printf("\n|------------------------|---------|------------------------|------------|-----|");
       for(i=1;i<=N;i++)
        {
        printf("\n|%19s|%9d|%30s|%12d|%5d|",book[i].Ten,book[i].NamXB,book[i].TenTG,book[i].Giatien,book[i].Luongsach);
        printf("\n|---------------------------|---------|------------------------|------------|-----|");
}

}
void laydulieu(Sach book[],int a[],int N)
{
        int i;
      for(i=1;i<=N;i++)

        a[i]=book[i].Giatien;
}
void quicksort(Sach book[],int a[],int  left,int right)
{
        int i,j;
        Sach t;
        if (left<right)
        {
                i=left+1;j=right;
                do{
                        while ((a[i]<=a[left]) and (i<=right)) i++;
                        while (a[j]>a[left]) j--;
                if (i<j)
                {
                        t=book[i];book[i]=book[j];book[j]=t;

                }

                }while (i<j);
             t =book[left];book[left]=book[j];book[j]=t;
             if (left<j-1) quicksort(book,a,left,j-1);
             if (j+1<right) quicksort(book,a,j+1,right);
        }
}
void Sapxep(Sach book[],int a[],int N)
{
        int i,j;

        printf("\nDanh sach sau khi sap xep la: ");
        printf("\n|       Ten sach         |  NamXB  |     Ten tac gia        |  Gia tien  |  LS |");
        printf("\n|------------------------|---------|------------------------|------------|-----|");
       for(i=1;i<=N;i++)

        {

        printf("\n|%19s|%9d|%30s|%12d|%5d|",book[i].Ten,book[i].NamXB,book[i].TenTG,book[i].Giatien,book[i].Luongsach);
        printf("\n|---------------------------|---------|------------------------|------------|-----|");
        }
}



int main()
{
        int i,N;
		int a[50];

        Sach book[50];

nhapDuLieu(book,&N);
xuatDuLieu(book,N);
laydulieu(book,a,N);

quicksort(book,a,1,N);
Sapxep(book,a,N);
getch();

}



