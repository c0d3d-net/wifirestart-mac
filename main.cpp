//
//  main.cpp
//  wifirestart
//
//  Copyright (c) 2018 c0d3d.net. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "\n##################################################\n###''''''###''''''###''''''####''''''###''''''####\n###''''''###''''''###'''''''###''''''###'''''''###\n###''#######''##''###''###''#######''###''###''###\n###''#######''##''###''###''#####''''###''###''###\n###''#######''##''###''###''#######''###''###''###\n###''''''###''''''###'''''''###''''''###'''''''###\n###''''''###''''''###''''''####''''''###''''''####\n##################################################\n\nWifiRestart for MacOS\nCopyright © 2018 c0d3d.net\n\nTurns Wifi device off and back on again.\nThe fastest way to restart your Airport device.\n\n";
    std::string command;
    command ="networksetup -setairportpower airport off; networksetup -setairportpower airport on\n\necho '\n\nDone! Have a nice day!\n'";
    //cout << command;
    system(command.c_str());
    
    return 0;
}
