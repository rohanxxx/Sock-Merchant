#include <iostream>
#include <algorithm>
using namespace std;

const int SIZE = 100;

int pairCounts(int n);

int main()
{
    int n = 0;
    
    cin >> n;
    cout << pairCounts(n) << endl;

    return 0;
}

int pairCounts(int n)
{
    int arr[SIZE];
    int count = 0;
    int j = 0;

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr+n);

    do
    {
        int element = 0;

        for(int i = 0; i < n; i++)
        {
            if(arr[j] == arr[i])
                element++;
        }

        j += element;

        double pairs = static_cast<double>(element)/2;
        count += static_cast<int>(pairs);
    
    }while(j < n);

    return count;
}
