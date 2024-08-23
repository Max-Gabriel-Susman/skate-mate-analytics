//
//  skate_mate_analytics_cxx_bluetooth.cpp
//  skate-mate-analytics-cxx-bluetooth
//
//  Created by Max Gabriel Susman on 8/22/24.
//  Copyright © 2024 Apple. All rights reserved.
//

#include <iostream>
#include "skate_mate_analytics_cxx_bluetooth.hpp"
#include "skate_mate_analytics_cxx_bluetoothPriv.hpp"

void skate_mate_analytics_cxx_bluetooth::HelloWorld(const char * s)
{
    skate_mate_analytics_cxx_bluetoothPriv *theObj = new skate_mate_analytics_cxx_bluetoothPriv;
    theObj->HelloWorldPriv(s);
    delete theObj;
};

void skate_mate_analytics_cxx_bluetoothPriv::HelloWorldPriv(const char * s) 
{
    std::cout << s << std::endl;
};

