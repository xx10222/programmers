#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer=0;
    vector<int> student(n);
    
    for(int i=0;i<lost.size();i++)
    {
        student[lost[i]-1] -= 1;
    }
    
    for(int i=0;i<reserve.size();i++)
    {
        student[reserve[i]-1] += 1;
    }
    
    for(int i=0;i<n;i++)
    {
        if(student[i]==1) //지금 학생이 여벌 체육복이 있는 경우
        {
            if(i-1>-1)
            {
                if(student[i-1]==-1) //앞번호 학생이 체육복이 없는 경우
                {
                    student[i-1]++;
                    student[i]--;
                } 
            }
        }
        if(student[i]==1)
        {
            if(student[i+1]==-1) //뒷번호 학생이 체육복이 없는 경우
            {
                student[i+1]++;
                student[i]--;                    
            }
        }           
    }
    for(int i=0;i<n;i++)
    {
        if(student[i]==0||student[i]==1)
        {
            answer++;
        }
    }
    
    return answer;
}