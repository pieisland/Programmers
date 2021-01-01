#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    //s에서 0을 없앤다
    //그 값의 길이를 2진변환으로 나타낸다
    //그걸 반복하다가 s가 1이 되면 끝! 
    //그 때의 변환 횟수와 변환 과정에서 제거된 0의 개수를 return한다.
    int recurCnt=0;
    int dZeroCnt=0;
    string str = s;
    while(str!="1"){
        recurCnt++;
        string tmp="";
        for(int i=0;i<str.length();i++) {
            if(str[i]=='1') tmp +=str[i];
            else dZeroCnt ++;
        }
        int newlen = tmp.length();
        
        int num = newlen;
        vector<int> binary;
        while(num!=0){
            int m = num/2;
            int n = num%2;
            binary.push_back(n);
            num = m;
        }
        
        //binary에서 구한 거를 거꾸로 해서 새로 만들겠죠..?
        string newStr ="";
        int blen = binary.size();
        for(int i=0;i<blen;i++) {
            newStr += binary[blen-1-i]+'0';
        }
        str = newStr;
    }
    
    answer.push_back(recurCnt);
    answer.push_back(dZeroCnt);
    
    return answer;
}
