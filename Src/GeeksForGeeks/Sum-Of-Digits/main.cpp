// http://practice.geeksforgeeks.org/problems/sum-of-digits/0

#include <iostream>
using namespace std;

int GetSumOfDigits(int & n) {

    int iSumOfDigit = 0;
    
    while(n > 0) {
        
        if(n % 2 == 1)
            iSumOfDigit++;
        
        n = n/2;
        
    }
    
    return iSumOfDigit;
}
int main() {
	//code
	int T, N;
	
	cin >> T;
	while(T-- > 0) {
	    cin >> N;
	    int result = GetSumOfDigits(N);
	    cout << result << endl;
	}
	
	return 0;
}