#include <iostream>
void memoryLeak()
{
    std::string *panthere = new std::string("i am groot");
    std::cout << *panthere << std::endl;
    delete panthere;
    panthere = NULL;
}

// int main()
// {
//     while (1)
//         memoryLeak();
//     return 0;
// }