#pragma once
#include <string>

class Movie {
private:
    //Attributes
    std::string name;
    std::string rating;
    int watched;

public:
    //Constructor
    Movie(std::string name, std::string rating, int watched);
    
    // Destructor
    ~Movie();
    
    //Methods
    ;
};