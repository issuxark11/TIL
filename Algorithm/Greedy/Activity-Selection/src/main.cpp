#include <iostream>
using namespace std;

typedef struct _Activity
{
    int iStartTime;
    int iFinishTime;
} activity;

int CompareActivity(const void *a, const void *b)
{
    if ( ((activity *)a)->iFinishTime >= ((activity *)b)->iFinishTime) 
        return 1; 
    else 
        return -1; 
}

void PrintMaximumActivity(int N, activity * i_arrActivityTime)
{
    int iMaxCount = 1;
    int iDueTime = 0;
    
    qsort(i_arrActivityTime, N, sizeof(activity), CompareActivity);
    
    iDueTime = i_arrActivityTime[0].iFinishTime;
    
    for(int i=1; i < N; i++)
    {
        if(i_arrActivityTime[i].iStartTime > iDueTime )
        {
            iMaxCount++;
            iDueTime = i_arrActivityTime[i].iFinishTime;
        }
    }
    cout << iMaxCount;
}

int main() {
	//code
	activity arrActivityTime[1000];
	int T, N;
	
	cin >> T;
	
	while(T-- > 0)
	{
	    cin >> N;
	    
	    for(int i =0; i < N; i++)
	    {
	        cin >> arrActivityTime[i].iStartTime;
	    }
	    
	    for(int i =0; i < N; i++)
	    {
	        cin >> arrActivityTime[i].iFinishTime;
	    }
	    
	    PrintMaximumActivity(N, arrActivityTime);
	}
	
	return 0;
}