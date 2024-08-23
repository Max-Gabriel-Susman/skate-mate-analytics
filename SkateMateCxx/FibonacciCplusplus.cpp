//
//  PairSkateMate.cpp
//  SkateMateCxx
//
//  Created by Max Gabriel Susman on 8/21/24.
//  Copyright © 2024 Apple. All rights reserved.
//

#include "FibonacciCplusplus.hpp"
#include <SkateMateCxx/SkateMateCxx-Swift.h>
#include <iostream>

FibonacciCalculatorCplusplus::FibonacciCalculatorCplusplus(bool printInvocation) : printInvocation(printInvocation) {}

double FibonacciCalculatorCplusplus::fibonacci(double value) const {
    // Print the value if applicable.
    if (printInvocation)
        std::cout << "[c++] fibonacci(" << value << ")\n";
    
    // Handle the base case of the recursion.
    if (value <= 1.0)
        return 1.0;
    
    // Create the Swift `FibonacciCalculator` structure and invoke its `fibonacci` method.
    auto swiftCalculator = SkateMateCxx::FibonacciCalculator::init(printInvocation);
    return swiftCalculator.fibonacci(value - 1.0) + swiftCalculator.fibonacci(value - 2.0);
}
