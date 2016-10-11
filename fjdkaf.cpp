#include "iostream"
#include <string>

template <class my,class sec>
class Vector2D 
{
public:
	my x_;
	sec y_;
	Vector2D(const my&x_input, const sec&y_input)
		:x_(x_input),y_(y_input)
	{
		
	}
	void print() {
		std::cout << x_ << " " << y_ << std::endl;
	}
};

int main() {
	/*Vector2D<int> int_vector(1, 1);
	int_vector.print();*/
	Vector2D<std::string, int> str_int_string("dsafd", 1111);
	str_int_string.print();

	return 0;
}