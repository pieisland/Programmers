#include <string>
#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

/*
pow는 c++에서 쓰려면 cmath를 include 하세요.
*/

int solution(int n) {
    int answer = 0;
    
    vector<int> samjin;
    
    int num = n;
    while(num!=0) {
        int m = num/3;
        int n = num%3;
        samjin.push_back(n);
        num = m;
    }
    
    int len = samjin.size();
    for(int i=0;i<len;i++) {
       answer+= samjin[len-1-i]*pow(3, i);
    }
    
    //그냥 귀찮은 문제 아닌가.
    
    return answer;
}
