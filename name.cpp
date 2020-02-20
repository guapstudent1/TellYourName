#include <iostream>
void main(int argc, char *argv[])
{
	// выцепим имя файла
	switch(*argv[0]){
	case 'a':
		std::cout << "My name is Alina\n";
	break;
	case 'b':
		std::cout << "My name is Boris\n";
	break;
	case 'c':
		std::cout << "My name is Constantin\n";
	break;
	default:
		std::cout << "Tell me - what is your Name?\n";
	break;
	};
}