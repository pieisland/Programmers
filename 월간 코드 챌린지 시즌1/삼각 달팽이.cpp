#include <string>
#include <vector>
#include <iostream>

using namespace std;

int arr[1000][1000];
int dir[3][2] = {{1, 0}, {0, 1}, {-1, -1}};

bool isinside (int y, int x, int n) {
    if(y>=0 && y<n && x>=0 && x<n) {
        return true;
    } else return false;
}

void show(int n) {
    for(int i=0;i<n;i++) {
        for(int j=0;j<=i;j++) {
            cout<<arr[i][j]<<' ';
        }
        cout<<endl;
    }
}

vector<int> solution(int n) {
    vector<int> answer;
    
    int sum=0;
    for(int i=1;i<=n;i++) {
        sum+=i;
    }
    
    int cnt=1;
    
    //move
    int cy = 0, cx = 0;
    int d = 0;
    arr[cy][cx] = cnt;
    cnt=2;
    
    while(1) {
        if(cnt==sum+1) {
            break;
        }
        int ny = cy + dir[d][0];
        int nx = cx + dir[d][1];
        
        if(isinside(ny, nx, n)&& arr[ny][nx]==0) {
            arr[ny][nx] = cnt;
            cnt++;
            cy = ny;
            cx = nx;
        }
        else {
            d++;
            if(d>3) d=0;
        }
    }
    
    //show(n);
    
    for(int i=0;i<n;i++) {
        for(int j=0;j<=i;j++) {
            answer.push_back(arr[i][j]);
        }
    }
    
    return answer;
}
