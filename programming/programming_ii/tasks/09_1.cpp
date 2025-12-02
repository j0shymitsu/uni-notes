#include <iostream>
#include <map>
#include <string>

int main()
{
    // name -> phone num
    std::map<std::string, std::string> phonebook;

    // entries
    phonebook["Alice"] = "0123456789";
    phonebook["Bob"] = "0987654321";
    phonebook["Charlie"] = "0123123123";

    // lookup
    std::string name;
    std::cout << "Enter a name to look up: ";
    std::getline(std::cin, name);

    auto it = phonebook.find(name);

    if (it != phonebook.end())
    {
        std::cout << "Phone number for " << it->first << " is " << it->second << '\n';
    }
    else
    {
        std::cout << "No entry found for " << name << '\n';
    }

    // list all
    std::cout << "\nAll entries:\n";

    for (const auto &entry : phonebook)
    {
        std::cout << entry.first << " - " << entry.second << '\n';
    }
    
    return 0;

}