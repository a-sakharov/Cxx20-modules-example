module;
#include <iostream>
export module sample;
import singleton;

export void test_mod() {
    std::cout << "test_mod called\n";
    singleton.Action("test_mod");
}

