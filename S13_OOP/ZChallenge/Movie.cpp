#include <string>
#include "Movie.h"

//Implementation: Constructor
Movie::Movie(std::string name, std::string rating, int watched) 
    : name(name), rating(rating), watched(watched)  {
}

//Implementation: Destructor
Movie::~Movie() {
}