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