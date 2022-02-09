#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Arr[] = {5, 3, 1, 9, 8,10,6,2, 4,7,11,15,12,14,13};
    int size = sizeof(Arr)/sizeof(Arr[0]);
    int i,j,temp,m;
    for (i = 1; i < size; i++)
    {
        temp =Arr[i];

        for (j=i ; j=0 ; j--)
        {
            if (Arr[j-1] > temp)
            {
                Arr[j - 1] = temp;
            }
            else
            {
                Arr[j] = temp;
            }

        }

    }

    for (m=0; m<size ; m++)
    {
    printf(" %d",Arr[m]);
    }

    return 0;
}
