// http://practice.geeksforgeeks.org/problems/sum-of-digits/0

#include <iostream>
using namespace std;

int GetSumOfDigits(int & n) {

    int iSumOfDigit = 0;
    
    while(n > 0) {
        
        iSumOfDigit += n % 10;
        
        n = (n - (n%10)) / 10;
        
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