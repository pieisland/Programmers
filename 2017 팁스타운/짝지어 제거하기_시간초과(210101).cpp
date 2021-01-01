#include <iostream>
#include<string>
using namespace std;

int solution(string s)
{
    int answer = 0;

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    //cout << "Hello Cpp" << endl;

    string str = s;
    while(1) {
        if(str.length()==0){
            answer = 1;
            break;
        }
        
        bool checkDel= false;
        //int index=-1;
        for(int i=0;i<str.length()-1;i++) {
            if(str[i]==str[i+1]) {
                //index = i;
                checkDel = true;
                str[i]='-';
                str[i+1]='-';
                break;
            }
        }
        
        if(checkDel) {
            //index, index+1 부분을 제거하고 str 만든다.
            //substr 이런 것도 있는데. 음..
            string newstr = "";
            for(int i=0;i<str.length();i++) {
                if(str[i]!='-') newstr += str[i];
            }
            str = newstr;
        }
        else {
            //제거를 못한다.
            break;
        }
        
        //cout<<str<<endl;
    }
    
    return answer;
}
