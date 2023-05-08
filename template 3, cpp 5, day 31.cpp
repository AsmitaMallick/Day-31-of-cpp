#include<iostream>
using namespace std;

template <class t>
class harry{
	public:
		t data;
		harry(t a){
			data = a;
			
		}
		void display(){
			cout<<data;
		}
		
};
int main(){
	harry <int> h(5);
	cout<<h.data<<endl;
	h.display();
	return 0;
}
