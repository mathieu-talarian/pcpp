#include "phonebook.hpp"

void printTabHead()
{
    std::cout << '|' << std::setw(10) << "Index"
              << '|' << std::setw(10) << "Firstname"
              << '|' << std::setw(10) << "LastName"
              << '|' << std::setw(10) << "Login"
              << '|' << std::endl;
}

void checkAndPrintContact(Contact tab[8], std::string input)
{
    int i = std::atoi(input.c_str());
    if (i > 0 && i < 9)
    {
        i--;
        if (tab[i].isFilled())
            return tab[i].PrintFull();
        else
        {
            std::cerr << "This contact is empty" << std::endl;
            return;
        }
    }
    std::cerr << "Please enter a good number" << std::endl;
    return;
}

void askForPerson(Contact tab[8])
{
    std::string input;
    std::cout << "=> Enter an index or RETURN" << std::endl;

    while (std::getline(std::cin, input))
    {
        trim(input);
        if (input.compare("RETURN") == 0)
            break;
        else
            checkAndPrintContact(tab, input);
    }
}

void searchContact(Contact tab[8])
{
    int cpt = 0;

    for (int i = 0; i < 8; i++)
    {
        if (tab[i].isFilled())
        {
            if (cpt == 0)
                printTabHead();
            cpt++;

            tab[i].Print();
        }
    }
    if (cpt == 0)
        std::cout << "No persons added" << std::endl;
    else
        return askForPerson(tab);
}