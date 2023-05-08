#include<iostream>
using namespace std;
template<class t1, class t2, class t3>
class myclass{
	public:
		t1 data1;
		t2 data2;
		t3 data3;
		myclass(t1 a, t2 b, t3 c){
			data1 = a;
			data2 = b;
			data3 = c;
		}
		void display(){
			cout<<this->data1<<endl<<this->data2<<endl<<this->data3;
		}
		
		
};
int main(){
	myclass<int,float,char>obj(1, 2.8,'s');
	obj.display();
	return 0;
}
