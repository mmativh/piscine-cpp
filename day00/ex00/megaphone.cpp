#include <string.h>
#include <iostream>

int main(int argc, char **argv) {
	int i;
	int j;
	
	j = 0;
	i = 1;

	if (argc <= 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
		return 0;
	}
	while (i < argc) {
		j = 0;
		while(argv[i][j] != '\0') {
			argv[i][j] = toupper(argv[i][j]);
			j++;
		}
		std::cout << argv[i];
		i++;
	}
	std::cout << std::endl;
	return 0;
}
