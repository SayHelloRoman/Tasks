#include <iostream>
#include <string>
#include <vector>


struct Human{
    std::string name;
    int age;
};

int main(){
    std::vector<Human> people;
    while(1){
        Human h;
        std::cout << "Input name: ";
        std::cin >> h.name;
        std::cout << "Input age: ";
        std::cin >> h.age;
        people.emplace_back(h);

        for(int i = 0; i < people.size(); i++){
            std::cout << people[i].name << " " << people[i].age << std::endl;
        }

        int i;
        std::cout << "1 - continue, 2 - exit: ";
        std::cin >> i;
        
        if(i == 2){
            break;
        }

    }
}