#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	
	int i = 1;
	while(i <= n){
		
	int j = n - i + 1;
	while(j){
		cout << "*";
		j--;
	}
	
	int space = 1;
	while(space <= i){
		cout << " ";
		space++;
	}
	cout << endl;
	i++;
	}
}
