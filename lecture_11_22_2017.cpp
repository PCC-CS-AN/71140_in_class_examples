#include <iostream>


using namespace std;

void g() {
	int b[] = {1,1,1,1,1,1,1,1,1,1};
	return;
}
int* f() {
	int *a;
	a = new int[10];
	a[9] = 100;
	return a;
}

int main(){
	int *a;
	
	a = f();
	g();
	g();
	cout << a[9] << endl;
	delete []a;
	return 0;
}