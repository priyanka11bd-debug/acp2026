#include<stdio>
void input (int n, float arr[n]);
int find_max_index(int n,float arr[n]);
void output( float arr[],int max_index);
int main()
{
    int n,max_index;
    floar arr[100];
    printf("enter the number of elements");
    scanf("%d",&n);
    input(n,arr);
    max_index=find_max_index(n,arr);
    output(arr,max_index);
    return 0;
}
void input(int n,float arr[n])
{
    int i;
    printf("enter %d float values \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%f",&arr[i]);
    }
}
int find_max_index(int n, float arr[n])
{
    int i,max_index=0;
    for(i=o;i<n;i++)
    {
        if(arr[i]>arr[max_index])
        {
max_index=i;
        }
}
return max_index;
}
void output(float arr[],int max_index)
{
    printf("maximum value =%.2f\n",arr[max_index]);
    printf("index of maximum value=%d\n",max_index);
}