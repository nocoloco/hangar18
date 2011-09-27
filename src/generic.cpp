#include <iostream>
#include <stdlib.h>
using namespace std;

template <class E>
class Generic {
	private:
		E elem;
	public:
		Generic(E v){
			elem = v;
			
		}
		void setElem(E v){
			elem = v;
		}
		E getElem(){
			return elem;
		}
		void print(){
			cout << elem << endl;
		}
};

int main(){
	Generic<int> i(1);
	Generic<char> c('c');
	i.print();
	c.print();
}
