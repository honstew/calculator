#include<stdio.h>


int main()
{
    char  a[80];
    char str;
    int i;
    int b[5] = { 0 };
    gets(a);

    for (i = 0; (str = a[i]) != '\0'; i++)
    {
        if (str >= 'a' && str <= 'z')
            b[0]++;
        else  if (str >= 'A' && str <= 'Z')
            b[1]++;
        else if (str >= '0' && str <= '9')
            b[2]++;
        else if (str == ' ')
            b[3]++;
        else b[4]++;

    }
    printf("Сд��ĸ:%d\n", b[0]);
    printf("��д��ĸ:%d\n", b[1]);
    printf("����:%d\n", b[2]);
    printf("�ո�:%d\n", b[3]);
    printf("�����ַ�:%d\n", b[4]);

    return 0;

}