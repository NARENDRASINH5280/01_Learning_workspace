
//namespace example 
// 
//
//
//
#include <iostream>
 namespace Mynamespace
{
	int value = 16;


       void showmyValue()
       {

		std::cout << "my value is "<< std::endl;

       }	       

}

using namespace std;
int main()
{


	cout << "using standerd namespace " << endl; 
	std::cout << "my value is " << Mynamespace :: value << std::endl;
        Mynamespace :: showmyValue();
	return 0;
}


