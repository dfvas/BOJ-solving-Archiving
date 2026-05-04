#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
    int N;
    cin >> N;
    vector<pair<pair<int, int>, int>> v;
    for(int i=0;i<N;i++){
    	int a, b;
    	cin >> a >> b;
    	v.push_back(make_pair(make_pair(b, a), i));
    }
    
    sort(v.begin(), v.end());
    
    int c[200001] = {0,};
    int ans[200001] = {0,};
    int t = 0;
    for(int i=0;i<N;i++){
    	int ii = i;
    	while(ii < N && v[ii].first.first == v[i].first.first) ii++;
    	for(int j=i;j<ii;j++){
    		int size = v[j].first.first;
    		int color = v[j].first.second;
    		int idx = v[j].second;
    		ans[idx] = t - c[color];
    	}
    	
    	for(int j=i;j<ii;j++){
    		int size = v[j].first.first;
    		int color = v[j].first.second;
    		int idx = v[j].second;
    		c[color] += size;
    		t += size;
    	}

    	i = ii - 1;
    }
    
    for(int i=0;i<N;i++){
    	cout << ans[i] << '\n';
    }
	return 0;
}
