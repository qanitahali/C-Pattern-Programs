#include <iostream>
using namespace std;

int main ()  {
	int n;
	cout <<"enter number of rows= ";           
	cin >> n;
	int add=1;
	for ( int i=0; i<n; i++ ){
		int k=i+1;
		for ( int j=0; j<n; j++ ){
			cout << k << " ";
			k+=add;
		}
		add+=1;
		cout << endl;
	}
	return 0;
}
