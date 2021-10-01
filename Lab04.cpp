#include <iostream>
#include <fstream>

void Q1() {
        std::cout << "This is the code for the first question";
}
int Q2() {
  std::ifstream inFile("input.txt"); 
   if (!inFile.good()) {    
        std::cerr << "Unable to read input.txt";
        return 1;  
        }   

        int sum = 0, num, count = 0; 
        while ((inFile >> num)) {
                sum += num; 
                count++;
        }     

        int average = sum / count;
        return average;
}

// int Q3() {

// }

int main(int argc, char *argv[]) {
        std::cout << "Arguments: " << argc << std::endl;
        switch(argv[1][1]) {
                case '1': Q1(); break;
                case '2': Q2(); break;
        }

        return 0;
}
