
#include <stdio.h>

void quick_find(int N);
void print_array(int arr[], int length);

int main() {
    quick_find(10);
    return 0;
}

void print_array(int arr[], int length)
{
    for(int i = 0; i < length; i++)
        printf("%d ", arr[i]);
    puts("");
}

void quick_find(int N)
{
    int a, b, id[N], temp, i;
    for(i = 0; i < N; i++) id[i] = i;


    while (scanf("%d %d", &a, &b) == 2)
    {
        if(id[a]==id[b])
        {
            print_array(id, N);
            continue;
        }
        for(temp = id[a], i = 0; i < N; i++)
            if (id[i]==temp) id[i] = id[b];
        printf("%d %d\n",a,b);
    }
    
}