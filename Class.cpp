#include "iostream"
#include <string>
#include <vector>

class Draw {
public:
	void doSomething() {
		std::cout << "draw" << std::endl;
	}
};

class Move {
public:
	void doSomething() {
		std::cout << "move" << std::endl;
	}
};
class GeometricObjectInterface {
public:
	virtual void doSomething() = 0;
};

template <class T_OPERATION>
class GeomericObject :public GeometricObjectInterface {
public:
	void doSomething() {
		T_OPERATION operation;
		operation.doSomething();
		
	}
};


int main() {
	///*Vector2D<int> int_vector(1, 1);
	//int_vector.print();*/
	//Vector2D<std::string, int> str_int_string("dsafd", 1111);
	//str_int_string.print();
	std::vector<GeometricObjectInterface*> obj_list;
	obj_list.push_back(new GeomericObject<Move>);
	obj_list.push_back(new GeomericObject<Draw>);
	
	for (auto itr : obj_list) {
		(itr)->doSomething();
	}
	return 0;
}