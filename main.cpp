#include <iostream>
#include <ostream>

enum class Planets : int{
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
        case Planets::mercury: return os << "Mercury";
        case Planets::venus: return os << "Venus";
        case Planets::earth: return os << "Earth";
        case Planets::mars: return os << "Mars";
        case Planets::jupiter: return os << "Jupiter";
        case Planets::saturn: return os << "Saturn";
        case Planets::uranus: return os << "Uranus";
        case Planets::neptune: return os << "Neptune";
        case Planets::pluto: return os << "Pluto";
        case Planets::unknown: return os << "Unknown";
        default: return os << "Error!";
    }
}

int main(){
    std::cout << "Hello, world!" << std::endl; //this is the main line
    std::cout << "\n";
    int planetNum{};
    while(true){
        Planets currentPlanet = static_cast<Planets>(planetNum);
        if(currentPlanet == Planets::unknown){
            break;
        }
        std::cout << "Hello, " << currentPlanet << "!" << std::endl;
        planetNum++ ;
    }

    return 0;
}