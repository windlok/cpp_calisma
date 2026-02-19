#include<iostream>
class matematik {
public:
	int a;
	int b;
	int result = 0;

	void topla() {
		this->result = this->a + this->b;
	}
	void print(){
		std::cout << this->result;
	}
};
int main() {
	matematik mat;
	mat.a = 10;
	mat.b = 14;
	mat.topla();
	mat.print();
}