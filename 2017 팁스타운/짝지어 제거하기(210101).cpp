#include <iostream>
#include<string>
#include<vector>
using namespace std;

//스택을 사용하는 문제였구나!

int solution(string s)
{
    int answer = 0;

    vector<char> vec;

    for(int i=0;i<s.length();i++) {
        if(vec.size()==0){
            vec.push_back(s[i]);
        }
        else{
            int lastIdx = vec.size()-1;
            if(s[i]==vec[lastIdx]){
                vec.pop_back();
            }
            else{
                vec.push_back(s[i]);
            }
        }
    }
    
    if(vec.size()==0) answer =1;
    else answer =0;
    
    return answer;
}
