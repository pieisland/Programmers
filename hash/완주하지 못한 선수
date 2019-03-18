#include <string>
#include <vector>
#include <stdio.h>
#include <algorithm>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    //왜 strcmp가 안되는지 모르겠다..
    //int size=participant.size();
    
    string answer = "";
    
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());
    
    int size=participant.size();
    
    for(int i=0;i<size;i++)
    {
        if(participant[i]!=completion[i])
        {
            answer=participant[i];
            break;
        }
    }
    return answer;
}
