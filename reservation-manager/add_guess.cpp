#include <iostream>
#include <fstream>
#include "json.hpp"

using json = nlohmann::json;

int main() {
    json data;

    std::ifstream in("people.json");
    if (in.is_open()) {
        in >> data;
    }

    std::string name;
    int age;

    std::cout << "Name: ";
    std::cin >> name;

    std::cout << "Age: ";
    std::cin >> age;

    data["people"].push_back({
        {"name", name},
        {"age", age}
    });

    std::ofstream out("people.json");
    out << data.dump(4);
}