#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    int index = 0;
    int max;
    sort(people.begin(),people.end()); //벡터 정렬
    while(people.size()>index)
    {
        max = people.back();
        people.pop_back();
        if(people[index]+max<=limit)
        {
            index++;
        }
        answer++;
    }
    return answer;
}