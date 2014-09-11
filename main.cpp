#include <iostream>
#include <string>

#include "BinaryHeap.h"

#include <cstdlib>


int main(int argc, char **argv) {

    BinaryHeap<int> testHeap;
    std::string input;
    std::string numbers = "0123456789";
    
    std::cout << "Input vals to add to BinaryHeap (val1 val2 val3 val4 ... end)\n";

    while (std::cin >> input)
    {
	// if 'std::String::find_first_not_of' doesnt find anything, then it outputs max_int (long int)
	// since any num higher than 1 will be set to true, add 1 to max int to start at 0(false)
	 if (input.find_first_not_of(numbers)+1 ) {
		if (input == "end")
		{
		    break;
		}
		else 
		{
		    std::cerr << input << " not recognized\n";
		    continue;
		}
	     
	} // end if 	
	int num = std::atoi(input.c_str()); // transform string into number, would have normally use boost::lexical_cast though
	testHeap.insert(num);
    }
 
    std::cout << "Input vals to remove from BinaryHeap (val1 val2 val3 val4 ... end)\n";

    while (std::cin >> input)
    {
	// if 'std::String::find_first_not_of' doesnt find anything, then it outputs max_int (long int)
	    // since any num higher than 1 will be set to true, add 1 to max int to start at 0(false)
	 if (input.find_first_not_of(numbers)+1 ) {
		if (input == "end")
		    break;
		else 
		{
		    std::cerr << input << " not recognized\n";
		    continue;
		}
	     
	} // end if 	
	int num = std::atoi(input.c_str());
	testHeap.removeKey(num);
    }
    
    std::cerr << "\n";
    
    
    while (!testHeap.isEmpty())
    {
	std::cerr << testHeap.findMin() << " ";
	testHeap.deleteMin();
	
    }
    std::cerr << "\n";
        return 0;
}
    

