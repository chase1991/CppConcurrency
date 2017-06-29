#include <iostream>
#include <thread>
#include <chrono>

void hello()
{
  std::cout << "Hello world" << std::endl;
  std::this_thread::sleep_for(std::chrono::seconds(3));
}

int main(int argc, const char * argv[]) 
{
  std::thread t{hello};
  t.join();
		    
  return 0;
}
