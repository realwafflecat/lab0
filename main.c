#include <stdio.h>

int main()
{
    int szz = 10;
    int array[szz] = {5,5,7,3,3,2,2,1,1,10};
    int max = array[0];
    for (int i=1;i < szz;i++)
        if (array[i] > max) max = array[i];

    int notExist = max+1;
    int countEl=0;

    for (int i=0;i < szz;i++)
    {
        if (array[i] != notExist)
        {
            bool unique = true;
            for (int j = i+1; j < szz; j++)
            {
                if (array[i] == array[j])
                {
                    array[j] = notExist;
                    unique = false;
                }
            }
            if (unique)
                countEl++;
        }
    }

    printf("countEl = %d", countEl);
}
