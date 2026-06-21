#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	
	int i = n;
	while(i >= 1){
		
	int j = 1;
	while(j <= i){
		cout << j;
		j++;
	}
	
	int k = 1;
	while(k <= n - i){
		cout << "*";
		k++;
	}
	
	int l = 1;
	while(l <= n - i){
		cout << "*";
		l++;
	}
	
	int m = i;
	while(m >= 1){
		cout << m;
		m--;
	}
	cout << endl;
	i--;
	}
}
