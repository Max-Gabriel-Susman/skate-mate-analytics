//
//  skate_mate_analytics_cxx_analysis.cpp
//  skate-mate-analytics-cxx-analysis
//
//  Created by Max Gabriel Susman on 8/23/24.
//  Copyright © 2024 Apple. All rights reserved.
//

#include <iostream>
#include "skate_mate_analytics_cxx_analysis.hpp"
#include "skate_mate_analytics_cxx_analysisPriv.hpp"

void skate_mate_analytics_cxx_analysis::HelloWorld(const char * s)
{
    skate_mate_analytics_cxx_analysisPriv *theObj = new skate_mate_analytics_cxx_analysisPriv;
    theObj->HelloWorldPriv(s);
    delete theObj;
};

void skate_mate_analytics_cxx_analysisPriv::HelloWorldPriv(const char * s) 
{
    std::cout << s << std::endl;
};

