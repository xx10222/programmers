#include <string>
#include <vector>

using namespace std;

string solution(string number, int k) {
    string answer = "";
    int index = -1; //선택된 number의 인덱스
    
    for(int i=0; i<number.length()-k; i++) //answer의 index
    {
        char max = 0;
        for(int j=index+1; j<=k+i; j++)
        {
            if(max < number[j])
            {
                max = number[j];
                index = j;
            }
        }
        answer += max;
    }
    
    return answer;
}