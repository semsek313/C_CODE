 #define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include <windows.h>
#include<locale.h>

void gotoxy(int x, int y)
{
COORD CRD;
CRD.X = x;
CRD.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), CRD);
}
 struct sifre
{
char pass[25];
}pas;
void title();
void printChar(char ch,int n);


typedef struct kimlik
{
	char name[30];
	char sname[30];
	char Tc[12];
}kimlik; kimlik deger1;
void add();
void modify(const kimlik*deger1);
int main()
{
	setlocale(LC_ALL,"turkish");
	
SetConsoleTitle("ogrenci bilgi sistemi");
system("color 9f");
gotoxy(42, 8);
printf("-------Giris Paneli-------");
gotoxy(42, 10);
printf("____________________________________");
gotoxy(42, 11);
printf("|lutfen sifre :                    |");
gotoxy(42, 12);
printf("|__________________________________|");
gotoxy(57, 11); int k = 0; char c[50]; int i;
while (k<10)
{
c[k] = getch();
char s = c[k];
if (s== 13)
{
break;
}
else
printf("*");
}
c[k] = '\0';
FILE* fp = fopen("password.txt", "r+");


fgets(pas.pass, 25, fp);
if (strcmp(pas.pass,c) == 0)
{
system("cls");
gotoxy(10, 3);
printf("<<<< lütfen bekleyin >>>>");
for (i = 0; i < 5; i++)
{
printf("\t(*_*)");
Sleep(500);
}
printf(" \n\n\n\n\n\t\t\t\t\t * * * * * * * *");
printf("\n\n\t\t\t\t\t *             *");
printf("\n\n\t\t\t\t\t *hoþ geldiniz *");
printf("\n\n\t\t\t \t\t *             *");
printf("\n\n\t\t\t\t\t * * * * * * * *");
printf("\n\n\n\n\n\t\t\t\t\tdevam etmek icin bir tusa basýnýz...... ");
getch();
title();
   title();
        printf("\n\t");
        printChar('*',64);
char option=0;
        printf("\n\n\t\t\t\t1. ogrenci ekle");
        printf("\n\n\t\t\t\t2. ogrenci ayarý\n\t");//sadece ad soyad ve tc degistirir 
       
        printChar('*',64);
        printf("\n\n\t\t\t\tlütfen seciniz :--> ");
        scanf("%c",&option);
      
    
       	
	memset(deger1.name,0,30);
			memset(deger1.sname,0,30);
				memset(deger1.Tc,0,30);
       
        switch(option)
{
	case '1':add();break;
	case '2':modify(&deger1);printf("%s %s %s",deger1.name,deger1.sname,deger1.Tc);break;
	
	
	
	
}




}
else
{
printf("Wrong Password . Get Out");
getch();
}
}

void add()
{
	/*typedef struct family
{
	char anne[20];
	
}family;
typedef struct kimlik
{
	char name[30];
	char sname[30];
	char Tc[12];
}kimlik;*/
	 FILE *tr=fopen("ad_soyad.txt","w+");
	if(!tr)
	{
		printf("dosya acilmadi");
		exit(1);
	}
	
	  deger1;
	scanf("%s",&deger1.name);
	scanf("%s",&deger1.sname);
	scanf("%s",&deger1.Tc);
fprintf(tr,"%s %s %s",deger1.name,deger1.sname,deger1.Tc);
	

	
}
void title()
{
    system("cls");
    system("COLOR 03");
    printf("\n\n\t");
    printChar('=',19);
    printf(" ogrencý kayýt sistemi ");
    printChar('=',19);
    printf("\n");
}
void printChar(char ch,int n)
{while(n>0)
	putchar(ch),n--;
	
}
void modify(const kimlik* deger)
{	
	 FILE *tr=fopen("ad_soyad.txt","w+");
	if(!tr)
	{
		printf("dosya acilmöadi");
		exit(1);
	}
	
char c[30];
char d[30];
char f[12];
	scanf("%s",c);
	scanf("%s",d);
	scanf("%s",f);

	strcpy(deger->name,c);
	strcpy(deger->sname,d);
	strcpy(deger->Tc,f);
	fprintf(tr,"%s %s %s",deger->name,deger->sname,deger->Tc);
}

