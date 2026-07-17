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
    unknown
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
        default: return os << "Unknown";
    }
    os << "Unknown";
    return os;
}

int main(){
    std::cout << "Hello, world!" << std::endl; //this is the main line
    int planetNum{};
    while(true){
        Planets currentPlanet{planetNum};
        if(currentPlanet == unknown){
            break;
        }
        std::cout << currentPlanet << std::endl;
        planetNum++ ;
    }

    return 0;
}