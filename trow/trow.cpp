#include<iostream>
#include<string>

class ex {
private:
	std::string msg;
public:
	ex(std::string s) {
		msg = s;

	}
	std::string yaz() {
		return msg;
	}
};
double bol(int a, int b) {
	try
	{
		if (b<1)
		{
			throw -1;
		}if (a<1)
		{
			throw ex("merhaba");
		}
	}
	catch (const std::exception&)
	{

	}
}
	

int main() {

	std::cout <<bol(0,1);
	return 0;
}