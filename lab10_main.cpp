#include <iostream>
#include <string>

#include "time_class.h"
#include "time_funcs.h"

int main()
{
	std::cout << "Welcome to Lab 10!\nEnter filename for work: ";
	std::string filename;
	std::cin >> filename;

	int x = 0;
	do {
		std::cout << "\n\nMenu:\n"
			<< "1. Add to file\n"
			<< "2. Print file\n"
			<< "3. Delete values\n"
			<< "4. Increment +1:30\n"
			<< "5. Insert values\n"
			<< "0. Exit\n"
			<< ">> ";

		std::cin >> x;
		switch (x) {
		case 0: break;
		case 1: add_to_end(filename); break;
		case 2: print(filename); break;
		case 3: delete_values(filename); break;
		case 4: increment_values(filename); break;
		case 5: insert_after(filename); break;
		default: std::cout << "Wrong input!\n";
		}

	} while (x != 0);

	return 0;
}