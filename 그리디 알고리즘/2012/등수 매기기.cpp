#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;
vector<int> v;

int main() {
    cin >> N;

    for(int i=0;i<N;i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(),v.end());

    long long total=0;

    for(int i=0;i<N;i++) 
        total+=abs((i+1)-v[i]);
    
    cout << total;
}
출처: https://tooo1.tistory.com/267 [개발자 퉁이리:티스토리]
