#include <iostream>

int* fill1(int* a)
{
    printf("Статический массив, индексная адресация: ");
    for (int i = 0; i < 10; i++)
    {
        a[i] = i * i;
        printf("%d%s", a[i], " ");
    }
    printf("\n");
    return a;
}

int* fill2(int* a)
{
    printf("Статический массив, косвенная адресация: ");
    int *p;
    p = a;
    for (int i = 0; i < 10; i++)
    {
        *(p + i) = i * i;
        printf("%d%s", *(p + i), " ");
    }
    printf("\n");
    return p;
}

int* fill3(int* a)
{
    printf("Динамический массив, индексная адресация: ");
    for (int i = 0; i < 10; i++)
    {
        a[i] = i * i;
        printf("%d%s", a[i], " ");
    }
    printf("\n");
    return a;
}

int* fill4(int* a)
{
    printf("Динамический массив, косвенная адресация: ");
    int* p;
    p = a;
    for (int i = 0; i < 10; i++)
    {
        *(p + i) = i * i;
        printf("%d%s", *(p + i), " ");
    }
    printf("\n");
    return p;
}
int main()
{
    int a1[10];
    int a2[10];
    int *a3;
    a3 = new int[10];
    int *a4;
    a4 = new int[10];

    fill1(a1);

    fill2(a2);

    fill3(a3);
    delete[] a3;
    
    fill4(a4);
    delete[] a4;

    return 0;
}