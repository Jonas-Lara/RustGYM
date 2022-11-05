#include <iostream>
#include <queue>

int main()
{
	std::queue <std::string> micola;

	micola.push("Radiohead");
	micola.push("Queen");
	micola.push("Metallica");
	micola.push("Bonjovi");

	std::cout << "Tamaño de la cola: "<< micola.size() << std::endl;	
	std::cout << "Frente de la cola: " << micola.front() << std::endl;
	micola.pop();

	
	std::cout << "\n\nLe hacemos un pop a la cola: \n\n";	
	
	std::cout << "Nuevo tamaño de la cola: "<< micola.size() << std::endl;	
	std::cout << "Nuevo frente de la cola: " << micola.front() << std::endl;

	std::cout << "\n";
	
	micola.push("Queen II");

	while(!micola.empty())
	{
		std::cout << micola.front() << " -- ";
		micola.pop();
	}

	std::cout << "\n\nTamaño final de la cola: "<< micola.size() << std::endl;

	return 0;
	
}
