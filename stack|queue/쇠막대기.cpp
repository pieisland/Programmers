#include <string>
#include <vector>

using namespace std;

int solution(string arrangement) {
    int answer = 0;
    int size=arrangement.size();
    vector<char> temp;
    
    for(int i=0;i<size;i++)
    {
        if(arrangement[i]=='(')
              temp.push_back('(');
        if(arrangement[i]==')')
        {
            temp.pop_back();
            if(arrangement[i-1]=='(')
            {
                answer+=temp.size();
            }
            else
                answer+=1;
        }
    }
    
    return answer;
}
