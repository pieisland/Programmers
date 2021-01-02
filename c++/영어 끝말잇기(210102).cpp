#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<string> personWords[10];

vector<int> solution(int n, vector<string> words) {
    vector<int> answer;
    
    personWords[0].push_back(words[0]);
    int personIndex = 1;
    bool talrak=false;
    int talrakInfo[2] = {0, 0};
    //cout<<words.size()<<endl;
    for(int i=1;i<words.size();i++) {
        int lastIndex = words[i-1].length()-1;
        if(words[i-1][lastIndex]!=words[i][0]) {
            //틀렸고요
            talrakInfo[0] = personIndex+1;
            talrakInfo[1] = personWords[personIndex].size()+1;
            talrak=true;
            break;
        }
        else {//이미 나온 단어라면
            //words[i];
            bool isRepeat=false;
            for(int j=0;j<i;j++){
                if(words[i]==words[j]){
                    isRepeat = true;
                    break;
                }
            }
            if(isRepeat) {
                talrakInfo[0] = personIndex+1;
                talrakInfo[1] = personWords[personIndex].size()+1;
                talrak=true;
                break;
            }
         }
        personWords[personIndex].push_back(words[i]);
        personIndex++;
        if(personIndex==n) personIndex =0;
    }
    
    answer.push_back(talrakInfo[0]);
    answer.push_back(talrakInfo[1]);
    
    return answer;
}
