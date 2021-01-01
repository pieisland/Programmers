#include <vector>
#include <iostream>
using namespace std;

int isPrime[3001];
int sel[1001];
int answer;

void dfs(int start, int cnt, vector<int> nums) {
    if(cnt==3) {
        int tmpSum=0;
        for(int i=0;i<1001;i++){
            if(sel[i]) {
                tmpSum += i;
            }
        }
        //cout<<tmpSum<<'\n';
        
        if(isPrime[tmpSum]) {
            answer++;
        }
        return;
    }
    
    if(start>=nums.size()){
        return;
    }
    
    for(int i=start;i<nums.size();i++) {
        sel[nums[i]] = 1;
        dfs(i+1, cnt+1, nums);
        sel[nums[i]] = 0;
    }
}

int solution(vector<int> nums) {
    //기본은 소수라고 하고
    for(int i=2;i<=3000;i++){
        isPrime[i] =1;
    }
    //소수 만들기
    for(int i=2;i<=3000;i++){
        for(int j=i+i;j<=3000;j+=i) {
            //소수가 아닙니다.
            isPrime[j] =0;
        }
    }
    
    dfs(0, 0, nums);
    
    return answer;
}
