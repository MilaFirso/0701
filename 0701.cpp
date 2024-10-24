#include <iostream>
#include <map>
#include <set>
#include <string>

int main() 
{
    setlocale(LC_ALL, "rus");
    size_t letReps = 0;
    std::string tekst = "";
    std::cout << "[IN]: ";
    std::getline(std::cin, tekst);
    std::set<char> setOfLet;
    std::multimap<size_t, char, std::greater<size_t>> mapOfLet;

    for (size_t i{}; i < tekst.length(); i++)
    {
        setOfLet.insert(tekst[i]);
    }

    for (const auto& letter : setOfLet)
    {
        letReps = std::count(tekst.begin(), tekst.end(), letter);
        mapOfLet.emplace(letReps, letter);
    }

    std::cout << "[OUT]:" << std::endl;
    for (const auto& pair : mapOfLet)
    {
        std::cout << pair.second << ": " << pair.first << std::endl;
    }
    return 0;
}