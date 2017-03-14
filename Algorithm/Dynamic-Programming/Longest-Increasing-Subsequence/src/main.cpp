#include <iostream>
#include <cstring>
using namespace std;

int GetLISBottomUp(int * arr, int N)
{
    int dpTable[1000];
    
    for(int i = 0; i < N; i++)
    {
        dpTable[i] = 1;
    }
    
    int iMaxLIS = 0;
    
    // fill dpTable
    for(int i = 1; i < N; i++)
    {
        for(int j = 0; j < i; j++)
        {
            if ( arr[i] > arr[j] && dpTable[j] + 1 > dpTable[i])
                dpTable[i] = dpTable[j] + 1;
        }
    }
    
    // pick max lis
    for (int i = 0; i < N; i++ )
        if (iMaxLIS < dpTable[i])
            iMaxLIS = dpTable[i];
            
    return iMaxLIS;
}

int main() {
    //code
    int T, N;
    int arr[1000];
    
    cin >> T;
    while(T-- > 0)
    {
        cin >> N;
        for(int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        cout << GetLISBottomUp(arr, N) << endl;;
    }
    
    return 0;
}