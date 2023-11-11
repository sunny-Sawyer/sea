/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
    int t = 0;
    int i = 0;
    int arr[] = { 1, 2, 3, 4, 5 };
    int n = sizeof(arr) / sizeof(arr[0]); 
    for (i = 0;i < n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("请输入要删除第几个元素\n");
    scanf("%d",&t);
    for (i = t-1; i < n-1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;
    printf("删除元素后的数组为：\n");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}*/