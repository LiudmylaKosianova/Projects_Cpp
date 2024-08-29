#include <iostream>
#include "libs/asio-1.30.2/include/asio.hpp"
 


int main(){

     

    asio::io_context io;
    std::cout << "ASIO setup works!" << std::endl;

    return 0;
}