#include <iostream>
using namespace std;
int N,ans,a[1000001];
int main(){
    cin >> N;
    for(int i=0;i<N;i++) {
        int v;
        cin >> v;
        if(a[v+1]){
            a[v+1]--;
            a[v]++;
        }else{
            ans++;
            a[v]++;
        }
    }
    cout << ans;
}
