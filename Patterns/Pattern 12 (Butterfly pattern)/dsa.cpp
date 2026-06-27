#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	
	int i = 1;
	while(i <= n){
		
	int j = 1;
	while(j <= i){
		cout << "*";
		j++;
	}
	int space1 = n - i;
	while(space1 > 0){
		cout << " ";
		space1--;
	}
	int space2 = n - i;
	while(space2 > 0){
		cout << " ";
		space2--;
	}
	int k = 1;
	while(k <= i){
		cout << "*";
		k++;
	}
	cout << endl;
	i++;
	}
	
	int a = 1;
	while(a <= n){
	
	int b = 1;
	while(b <= n - a + 1){
		cout << "*";
		b++;
	}
	int space3 = a - 1;
	while(space3 > 0){
		cout << " ";
		space3--;
	}
	int space4 = a - 1;
	while(space4 > 0){
		cout << " ";
		space4--;
	}
	int c = 1;
	while(c <= n - a + 1){
		cout << "*";
		c++;
	}
	cout << endl;
	a++;
	}
}
