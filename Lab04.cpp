#include <iostream>
#include <fstream>
#include <unordered_map>

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
 	std::cout << average;
 	return average;
}

void Q3() {
	std::unordered_map<std::string, int> map;

	std::ifstream inFile("NameFile.txt");
	std::ifstream gradeFile("input.txt");

	std::string name;
	int num;
	while ((inFile >> name && gradeFile >> num)) {
		map.insert(std::pair<std::string, int> {name, num});
	}

	std::string key;
	std::cin >> key;
	
	if (map.find(key) == map.end()) {
		std::cout << "Not exists";
	} else {
		std::cout << map[key];
	}
}

int main(int argc, char *argv[]) {
        switch(argv[1][1]) {
                case '1': Q1(); break;
                case '2': Q2(); break;
 		case '3': Q3(); break;
 	}

        return 0;
}
