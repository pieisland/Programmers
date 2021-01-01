#include <string>
#include <vector>

using namespace std;

/*
dfs를 하면 안되는 걸까..? 그럼 뭘로 풀어야 하는거지.
이게 dp 적용이 되나?
아니면 반복 호출이 되는 게 있는걸까.
*/

int zeroCnt;
int oneCnt;

void dfs(int y, int x, int len, vector<vector<int>> arr) {
    if(len==1) {
        if(arr[y][x]==1) oneCnt++;
        else zeroCnt++;
        return;
    }
    
    int cnt=0;
    int value = 0;
    for(int i=y;i<y+len;i++) {
        for(int j=x;j<x+len;j++){
            if(i==y && j==x) value = arr[i][j];
            
            //아닐 떄는 쪼갠다.
            if(arr[i][j]!=value) {
                int newlen=len/2;
                dfs(y, x, newlen, arr);
                dfs(y+newlen, x, newlen, arr);
                dfs(y, x+newlen, newlen, arr);
                dfs(y+newlen, x+newlen, newlen, arr);
                return;
            }
        }
    }
    
    //다 같으면 한 개만 더한다.
    if(value==0) zeroCnt++;
    else oneCnt++;
    return;
}

vector<int> solution(vector<vector<int>> arr) {
    vector<int> answer;
    
    int len = arr.size();
    dfs(0,0,len,arr);
    
    answer.push_back(zeroCnt);
    answer.push_back(oneCnt);
    
    return answer;
}
