#include <iostream>
#include <fstream>

int main() {
    int count = 0;
    std::cout << "Your fish: ";
    std::string fish;
    std::cin >> fish;
    std::ifstream river("..\\river.txt");
    std::ofstream basket("..\\basket.txt", std::ios::app);
    while (!river.eof()) {
        std::string temp;
        river >> temp;
        if (temp == fish) {
            ++count;
            basket << fish << std::endl;
        }
    }
    river.close();
    basket.close();

    std::cout << count;
    return 0;
}
