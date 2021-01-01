#include <string>
#include <vector>
#include <iostream>

using namespace std;

/*
진짜 웃긴게..
web이라고 써서 계속 틀린 거였음 ...
하하하. wed인데..

이런 달력 문제 나오면, 사실 귀찮긴 하지만 쉬운 문제다.
*/

string day[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
int monthDay[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

string solution(int a, int b) {
    string answer = "";
    
    int sumDays=4;
    for(int i=1;i<a;i++) {
        sumDays +=monthDay[i];
    }
    sumDays += b;
    cout<<sumDays<<endl;
    
    //sumDays += 4;  
    
    int rest = sumDays%7;
    cout<<day[rest]<<'\n';
    
    answer = day[rest];
    
    return answer;
}
