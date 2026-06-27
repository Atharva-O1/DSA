#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	
	int i = 1;
	while(i <= n){
	
	int space = n - i;
	while(space){
		cout << " ";
		space--;
	}
	int j = 1;
	while(j <= i){
		cout << "*";
		j++;
	}
	int k = 1;
	while(k <= i){
		cout << "*";
		k++;
	}
	cout << endl;
	i++;
	}
	int a = n - 1;
	while(a >= 1){
		
	int space = n - a;
	while(space){
		cout << " ";
		space--;
	}
	int b = 1;
	while(b <= a){
		cout << "*";
		b++;
	}
	int c = 1;
	while(c <= a){
		cout << "*";
		c++;
	}
	cout << endl;
	a--;
	}
}
