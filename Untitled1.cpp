#include<bits/stdc++.h>

using namespace std;

int a[100] ={0}, n;
void result(){
	for(int i = 1; i <= n; i++) cout << a[i] << " ";
	for(int i = n ;i >= 1; i--) cout << a[i] << " ";
	cout << endl;
}
void Solve(){
	while(true){
		result();
		int i = n;
		while(a[i] == 1){
			a[i] = 0;
			i--;
		}
		if(i == 0) break;
		    else a[i] = 1;
	}
}
int main(){
	cin >> n;
	n /= 2;
	Solve();
}
