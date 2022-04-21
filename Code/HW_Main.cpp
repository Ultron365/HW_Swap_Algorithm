#include <iostream>
#include <iomanip>
using namespace std;


#define MAX_ARR_SIZE 10000

int main()
{
  
    int countArray[MAX_ARR_SIZE];
    char inputString[MAX_ARR_SIZE];
    int i, j;

    cout << "Please enter your array : ";
    cin >> inputString;

    for (i = 0; i < MAX_ARR_SIZE; i++)
    {
        countArray[i] = 0;
    }

    for (i = 0; inputString[i]; i++)
    {
        countArray[inputString[i]]++;
    }
  
    cout << "Your sorted array is:";

  
    for (i = 0; i < MAX_ARR_SIZE; i++)
    {
        for (j = 0; j < countArray[i]; j++)
        {
            printf("%c", i);
        }
    }
}
