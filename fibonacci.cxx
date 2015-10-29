/* homework 1 Fibonacci
* Astrid Seidel
*/

#include <iostream>

using namespace std;

int main(){
	int N;
	long int f = 0; // for N >= 47
	long int fold = 1;
	long int folder = 1;
	
	cout << "Enter n and I will return the nth Fibonacci number for you:" << endl;
	cin >> N;
	
	if(N == 0){
		f = 0;
	}
	if(N == 1){
		f = 1;
	}
	if(N == 2){
		f = 1;
	}
	else
	for(int i = 3; i <= N; i++){
		f = fold + folder;
		folder = fold;
		fold = f;
	}

	cout << "The " << N << ". Fibonacci number is " << f << "." << endl;

	return 0;
}
