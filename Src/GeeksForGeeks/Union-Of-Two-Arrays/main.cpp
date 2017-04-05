http://practice.geeksforgeeks.org/problems/union-of-two-arrays/0

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void PrintUnionTwoVec(vector<int> & vecA, vector<int> & vecB) {
        
        vector<int> vecUnion(vecA);
        int prev;
        
        for(unsigned int i = 0; i < vecB.size(); i++)
        {
            vecUnion.push_back(vecB[i]);
        }
        
        sort(vecUnion.begin(), vecUnion.end());
        
        prev = vecUnion.front();
        cout << prev << " ";
        for(unsigned int i = 1; i < vecUnion.size(); i++) {
            if(vecUnion[i] != prev) {
                cout << vecUnion[i] << " ";
            }
            prev = vecUnion[i];
        }
}

int main() {
	//code
	int T, N, M, tmp;
	vector<int> vecA, vecB;
	
	cin >> T;
	while(T-- > 0) {
	
	    cin >> N >> M;
	    
	    for(int i = 0; i < N; i++) {
	        cin >> tmp;
	        vecA.push_back(tmp);
	    }
	    
	    for(int i = 0; i < M; i++) {
	        cin >> tmp;
	        vecB.push_back(tmp);
	    }
	    
	    PrintUnionTwoVec(vecA, vecB);
	    cout << endl;
	    
	    vecA.clear();
	    vecB.clear();
	}
	return 0;
}