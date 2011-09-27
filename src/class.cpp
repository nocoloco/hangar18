#include <iostream>
#include <stdlib.h>
using namespace std;

class Test {
	private:
		int b;

	public:
		Test(int n){
			b=n;
		};
		int get(){
			return b;
		};
		void set(int n){
			b=n;
		};
		void print(){
			cout << b << endl;
		};
};

int main(){
	
	int * end;

	end = (int*)malloc(sizeof(int)*1);
	*end = 10;
	cout << end << endl;
	cout << *end << endl;
	cout << &end;

	Test a(3);
	Test b(5);
	b = a;
	a.print();
}
