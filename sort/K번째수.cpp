#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
    for(int i=0;i<commands.size();i++)
    {
        int start=commands[i][0]-1;
        int end=commands[i][1]-1;
        int num=commands[i][2]-1;
        
        vector<int> arr2;
        for(int i=start;i<=end;i++)
        {
            arr2.push_back(array[i]);
        }
        sort(arr2.begin(), arr2.end());
        answer.push_back(arr2[num]);
    }
    
    return answer;
}
