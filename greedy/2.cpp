#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string name) {
    int answer = 0;
    int move = name.length()-1;
    int aa=0;
    for(int i=0;i<name.length();i++) //알파벳 변경 횟수
    {
        if(name[i]!='A')
        {
            answer+=min(name[i]-'A','Z'-name[i]+1);
        }
    }
    
    for(int i=0;i<name.length();i++)
    {
        if(name[i]=='A')
        {
            int target = i;
            while(target<name.length() && name[target] == 'A')
            {
                target++;
            }
            int left= i==0 ? 0 : i-1;
            int right = name.length()-target;
            move=min(move,left+right+min(left,right));
        }
    }
    answer+=move;
    return answer;
}