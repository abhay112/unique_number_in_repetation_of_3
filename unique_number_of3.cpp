#include<bits/stdc++.h>

using namespace std;

// a[ ] = {1,1,2,1,2,3,2}///// output 3

int main(){
	int n; cin >> n;
	int a[n];
	int b[64] ={0};
	for(int i = 0; i < n; i++)
		cin >> a[i];

	for(int i = 0; i < n; i++){
		int t = a[i];
		int j = 0;
		while(t>0){
			int last_bit = t&1;
			b[j] += last_bit;
			j++;
			t = t >> 1;
		}
	}
	int ans = 0;
	int p = 1;
	for(int i = 0; i < 64; i++){
		b[i] = b[i] % 3;
		ans += (b[i]*p);
		p = p << 1;
	}
	cout << ans ;
}