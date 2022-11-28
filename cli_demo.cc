#include <CLI/CLI.hpp>

int main(int argc, char** argv){
    CLI::App thisApplication{"Hier ist die Programmbeschreibung für das Super CLI11 Demoprojekt", "Super CLI11 Demo"};

    try{
        thisApplication.parse(argc, argv);
    } catch(const CLI::ParseError& e){
        return thisApplication.exit(e);
    }
}
