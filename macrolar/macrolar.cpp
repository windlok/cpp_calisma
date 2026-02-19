#include <iostream>
#define DEBUG
//#define topla(a,b) (a+b)
int main()
{

#ifndef DEBUG
	std ::cout << "Debug modu kapali." << std::endl;
#endif // !DEBUG
	std::cout << "Debug modu acik." << std::endl;
}
