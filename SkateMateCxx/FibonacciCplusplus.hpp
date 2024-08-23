//
//  SkateMatePairingCplusplus.hpp
//  SkateMateCxx
//
//  Created by Max Gabriel Susman on 8/21/24.
//  Copyright © 2024 Apple. All rights reserved.
//

#pragma once

class FibonacciCalculatorCplusplus {
public:
    FibonacciCalculatorCplusplus(bool printInvocation);
    double fibonacci(double value) const;
private:
    bool printInvocation;
};
