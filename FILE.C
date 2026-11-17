#include<stdio.h>
void main()
{
FILE*fp;
char name[300];
//clscr();
//1.writing data into file
fp=fopen("student.txt","w");
if(fp==NULL)
{
printf("file can't be opened");
return;
}
fprintf(fp,"welcome to c programming");
fclose(fp);
printf("data written successfully\n");
//2.appending data into file
fp=fopen("student.txt","a");
if (fp==NULL)
{
printf("file can't be opened");
return;
}fprintf(fp,"\nwelcome to file handling");
fclose(fp);
printf("data appended successfully\n");
//3.reading data from file
fp=fopen("student.txt","r");
if (fp==NULL)
{
printf("\nfile contents:\n");
while (fgets(name,sizeof(name),fp)!=NULL)
{
printf("%s",name);
}
fclose(fp);
}}