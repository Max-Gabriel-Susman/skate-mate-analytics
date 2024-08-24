//
//  PairSkateMate.cpp
//  SkateMateCxx
//
//  Created by Max Gabriel Susman on 8/21/24.
//  Copyright © 2024 Apple. All rights reserved.
//

#include "SkateMateSessionCplusplus.hpp"
#include <SkateMateCxx/SkateMateCxx-Swift.h>
#include <iostream>

// I think the omission of this constructor was the issue w/ SkateMateSessionCplusplus.hpp not being recognized by the package header mb?
SkateMateSessionCplusplus::SkateMateSessionCplusplus(bool printInvocation) : printInvocation(printInvocation) {}

double SkateMateSessionCplusplus::initiateSkateMateSession(double value) const {
    // Print the value if applicable.
    if (printInvocation)
        std::cout << "[c++] fibonacci(" << value << ")\n";
    
    // Handle the base case of the recursion.
    if (value <= 1.0)
        return 1.0;
    
    // Create the Swift `FibonacciCalculator` structure and invoke its `fibonacci` method.
    auto swiftCalculator = SkateMateCxx::SkateMateSession::init(printInvocation);
    return swiftCalculator.initiateSkateMateSession(value - 1.0) + swiftCalculator.initiateSkateMateSession(value - 2.0);
}
