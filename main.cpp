#include <iostream>
#include <ostream>

enum Planets:int{
    mercury,
    venus,
    earth,
    mars,
    jupiter,
    saturn,
    uranus,
    neptune,
    pluto,
    unknown,
    error
};

std::ostream& operator<<(std::ostream& os, Planets planet){
    
    switch (planet) {
        case mercury: return os << "Mercury";
        case venus: return os << "Venus";
        case earth: return os << "Earth";
        case mars: return os << "Mars";
        case jupiter: return os << "Jupiter";
        case saturn: return os << "Saturn";
        case uranus: return os << "Uranus";
        case neptune: return os << "Neptune";
        case pluto: return os << "Pluto";
        case unknown: return os << "Unknown";
        default: return os << "Error!";
    }
    os << "Error!";
    return os;
}

int main(){
    std::cout << "Hello, world!" << std::endl; //this is the main line
    std::cout << "\n";
    int planetNum{};
    while(true){
        Planets currentPlanet{planetNum};
        if(currentPlanet == unknown){
            break;
        }
        std::cout << "Hello, " << currentPlanet << "!" << std::endl;
        planetNum++ ;
    }

    return 0;
}