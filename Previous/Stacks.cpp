#include <iostream>
#include <stack>

int main()
{
	std::stack <int> mipila;

	mipila.push(10);
	mipila.push(20);

	mipila.push(30);
	mipila.push(40);

	std::cout << "Tamaño de la pila: " << mipila.size() << std::endl;
	
	while(!mipila.empty())
	{
		std::cout << "\n";
		std::cout << mipila.top() << std::endl;
		std::cout << "___" << std::endl;

		mipila.pop();
	}

	return 0;
}
