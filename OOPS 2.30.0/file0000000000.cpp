#include<stdio.h>
#include<stdlib.h>
struct stud
{
      int rno;
      char name[20],add[20];
}s;
int main()
{
      FILE *fp;
      fp=fopen("student.txt","w");
      printf("Enter record of student:\n\n");
      printf("\nEnter student contact number : ");
      scanf("%d",&s.rno);
      printf("\nEnter name of student: ");
      scanf("%s",s.name);
      printf("\nEnter student address : ");
      fflush(stdin);
      scanf("%s",s.add);
      fprintf(fp,"%d\n%s\n%f",s.rno,s.name,s.add);
      printf("\nRecord stored in file...");
      fclose(fp);
      return 0;
}
