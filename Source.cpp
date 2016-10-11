#include "iostream"
#include <string>

//template <class T_INPUT_TYPE>
//void print(const T_INPUT_TYPE &v) {
//	std::cout << v << std::endl;
//}
class MyData {
public:
	int data_;
	MyData() {
		std::cout << "djfklsjafkd" << this << &data_ << std::endl;
	}
	MyData(const MyData& input)
		:data_(input.data_)
	{
		std::cout << "Address" << &input << std::endl;
		std::cout << "djfklsjafkd" << this << &data_ << std::endl;
	}
	~MyData()
	{
		std::cout << "sectroutjkdsa" << this << &data_ << std::endl;
	}
};



void printReference(MyData &a) {
	std::cout << a.data_ << std::endl;
}

typedef MyData* p_MyData;
void printPointer(p_MyData *a) {
	std::cout << a->data_ << std::endl;
}


int main() {
	MyData my_data;
	my_data.data_= 123;
	return 0;
}