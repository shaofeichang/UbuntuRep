#include "printf_c.h"
#include "cout_c.h"
int main()
{
	std::cout << greencolor << "hello" <<  "red" << std::endl;
	std::cout << defcolor << std::endl;
	
	printfc(fg_red, "xxxx: %d\n", 2);
	system("pause");
	return 0;
}