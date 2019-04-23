#include <stdio.h>
#include <stdlib.h>
typedef union BOOK
{
    char name[30];
    char number[3];
}book;
int main(void)
{
    int count=0;
    int i;
    book *p;
    printf("주소의 개수: ");
    scanf("%d",&count);
    getchar();
    p=(book*)malloc(count*sizeof(book));
    if(p==NULL)
    {
        printf("메모리할당오류\n");
        exit(1);
    }
    for(i=0;i<count;i++)
    {
        printf("이름을 입력하세요: ");
        gets(p[i].name);
        printf("휴대폰 번호를 입력하세요: ");
        gets(p[i].number);
    }
    printf("========================================\n");
    printf("이름\t휴대폰 번호\n");
    printf("========================================\n");
    for(i=0;i<count;i++)
    {
        printf("%s\t%s\n",p[i].name,p[i].number);
        printf("========================================\n");
    }
    free(p);
    return 0;
}

