#include<stdio.h>

int main()
{
    int n = 5;
    int array[5] = { 1,4,6,1,324};

    for(int i = 0; i < n-1; i++)
    {
        for( int j = 0; j < n-i-1;j++)
        {
            if(array[j]>array[j+1])
            {
                int temp = array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }

    for(int k = 0; k < n; k++)
    {
        printf("%i\n",*(array+k));
    }
    return 0;
}

