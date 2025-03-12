module;
#include <iostream>
#include <string>
export module singleton;

class singleton_class {
public:
    void Action(std::string param)
    {
        std::cout << "singleton_class::Action(" << param << ")\n";
    }

private:

};

export singleton_class singleton;
