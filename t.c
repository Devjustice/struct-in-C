#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct student
{
char name[30];
char weight[30];
char hight[30];
int final;
}student;
void View(student *p,int n);
void Namesort(student *p,int n);
void Hsort(student *p,int n);
void Wsort(student *p,int n);
int comparisonFunctionString(const void *a, const void *b);
int main(void)
{
    int i;
    student *p;
   int ipt=0;
    int count;
puts("");
printf("사용하실 메모리 숫자를 입력하세요\n 0을 할당시 종료됩니다.\n");    
scanf("%d",&count);if(count==0)exit(1);

p=(student*)calloc(count,sizeof(student));
    if(p==NULL)
    {
        printf("메모리할당오류\n");
        exit(1);
    }
 else   {
        printf("메모리가할당되었습니다\n");
    }
View(p,count);
printf("이름오름차순정렬하려면 1\n몸무게오름차순정렬하려면 2\n 키오름차순정렬하려면 3\n");
scanf("%d",&ipt);
switch(ipt)
{
case 1: { Namesort(p,count);break;}
case 2: { Wsort(p,count); break;}
case 3: { Hsort(p,count);break;}
default: { break;}
}
 
   free(p);
    return 0;
}




void Namesort(student *p,int n){

int i;
  qsort((void *)p, n, sizeof(p[0]), comparisonFunctionString);

  printf("========================================\n");
    printf("이름\t몸무게\t키\n");
    printf("========================================\n");
    for(i=0;i<n;i++)
    {
        printf("%s\t%s\t%s\n",p[i].name,p[i].weight,p[i].hight);
        printf("========================================\n");
    }


}


void Hsort(student *p,int n){

int i,ii;
int temp;
  

 
    for(i = 0; i < n; i++)
    {
        for(ii = 0; (ii + i) < n; ii++)
        {
            if(p->hight > p->hight+ii)
            {
                temp = p->hight[ii];
                p->hight[ii] = p->hight[ii+1];
                p->hight[ii+1] = temp;
            }
        }
    }
 
  printf("========================================\n");
    printf("이름\t몸무게\t키\n");
    printf("========================================\n");
    for(i=0;i<n;i++)
    {
        printf("%s\t%s\t%s\n",p[i].name,p[i].weight,p[i].hight);
        printf("========================================\n");
    }



}




void Wsort(student *p,int n){

int i,ii;
int temp;
  

 
    for(i = 0; i < n; i++)
    {
        for(ii = 0; (ii + i) < n; ii++)
        {
            if(p->weight > p->weight+ii)
            {
                temp = p->weight[ii];
                p->weight[ii] = p->weight[ii+1];
                p->weight[ii+1] = temp;
            }
        }
    }
 
  printf("========================================\n");
    printf("이름\t몸무게\t키\n");
    printf("========================================\n");
    for(i=0;i<n;i++)
    {
        printf("%s\t%s\t%s\n",p[i].name,p[i].weight,p[i].hight);
        printf("========================================\n");
    }



}






void View(student *p,int n){

    
	int i;
for(i=0;i<n;i++)
    {
        printf("이름을 입력하세요: ");
        scanf("%s",p[i].name);
        printf("몸무게를 입력하세요: ");
        scanf("%s",p[i].weight);
	printf("키를 입력하세요: ");
        scanf("%s",p[i].hight);
    }
    printf("========================================\n");
    printf("이름\t몸무게\t키\n");
    printf("========================================\n");
    for(i=0;i<n;i++)
    {
        printf("%s\t%s\t%s\n",p[i].name,p[i].weight,p[i].hight);
        printf("========================================\n");
    }


}
int comparisonFunctionString(const void *a, const void *b) {
  return( strcmp( (char *)a, (char *)b) );
}








