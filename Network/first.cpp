#include <iostream>
#include <chrono>
#include <thread>

#define ASIO_STANDALONE //it is probably extra, since my asio dir comes withour boost
#include "libs/asio-1.30.2/include/asio.hpp"
#include "libs/asio-1.30.2/include/asio/ts/buffer.hpp"
#include "libs/asio-1.30.2/include/asio/ts/internet.hpp"

 
 


int main(){
  

    asio::io_context context; //platform specific interface 
    std::cout << "ASIO setup works!" << std::endl;

    asio::error_code ec;
    //endpoint (address) where to connect to
    asio::ip::tcp::endpoint endpoint(asio::ip::make_address("93.184.216.34", ec), 80);

    //create a socket
    asio::ip::tcp::socket socket(context);

    //socket will try to connect
    socket.connect(endpoint, ec);

    //check for problems
    if(!ec){
        std::cout << "Connected" << std::endl;
    }else{
        std::cout << "Failed to connect" << ec.message() << std::endl;
    }

    //check if the connection is alive
    if(socket.is_open()){
        //createing the request to send
        std::string sRequest = "GET /index.html HTTP/1.1\r\n"
                                "Host: example.com\r\n"
                                "Connection: close\r\n\r\n";
        
        //sending the request
        socket.write_some(asio::buffer(sRequest.data(),sRequest.size()), ec);

        //
        using namespace std::chrono_literals;
        std::this_thread::sleep_for(200ms);
        
        //check for the answer
        size_t bytes = socket.available();

        std::cout << "Bytes available: " << bytes << std::endl;

        //if there are available bytes, let's read them
        if(bytes > 0){
            std::vector<char> vBuffer(bytes);
            socket.read_some(asio::buffer(vBuffer.data(), vBuffer.size()),ec);

            //display to the console
            for (auto c : vBuffer) std::cout << c;
        }

    }
    
     

    return 0;
}