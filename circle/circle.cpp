#include <iostream>
using namespace std;

class circle{
	private:
		float r;
		const float PI = 3.14;
	public:
		circle(float);
		void set_r(float);
		float get_r();
		float p();
		float s();
};
circle::circle(float a){
	if (a < 0)
		r = 0;
	else
		r = a;
}
void circle::set_r(float a){
	if (a < 0)
		a = 0;
	r = a;
}

float circle::get_r(){
	return r;
}

float circle::p(){
	return 2 * PI * r;  // محیط دایره
}

float circle::s(){
	return PI * r * r;  // مساحت دایره
}
int main(){
	circle h(0);   // باید یک عدد به کانستراکتور پاس بدید
	h.set_r(-2);
	float e = h.get_r();
	cout << e << endl;  // خروجی باید 0 باشه چون مقدار منفی وارد کردید
	return 0;
}