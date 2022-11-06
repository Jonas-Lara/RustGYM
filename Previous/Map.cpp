#include <iostream>
#include <map>

int main()
{

	std::map <char, int> mapita;
	
	mapita['a'] = 50;
	mapita['b'] = 50;
	mapita['c'] = 200;

	mapita.insert(std::pair < char, int > ('d', 400));


	mapita.erase('b');

	if(mapita.find('c') != mapita.end())
	{
		std::cout << "mapita tiene el C" << std::endl;
		std::cout << mapita.find('c')->second << " este es el valor de la llave C\n";
	}
	else 
	{
		std::cout << "No existe la llave C\n";
	}

	mapita.size();


	return 0;
}
