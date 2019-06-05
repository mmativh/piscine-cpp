#include <iostream>

int main(int argc, char **argv) {
 int i = 1;
 int j = 0;
 if (argc <= 1)
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
  while(i < argc) {
      j = 0;
      while(argv[i][j] != '\0') {
         argv[i][j] = toupper(argv[i][j]);
        j++;
      }
        std::cout << argv[i] << std::endl;
        i++;
    }
    return 0;

}