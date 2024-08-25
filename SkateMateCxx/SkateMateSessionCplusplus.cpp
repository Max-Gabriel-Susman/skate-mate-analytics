//
//  PairSkateMate.cpp
//  SkateMateCxx
//
//  Created by Max Gabriel Susman on 8/21/24.
//  Copyright © 2024 Apple. All rights reserved.
//

#include "SkateMateSessionCplusplus.hpp"
#include "SkateMatePeripheralCplusplus.hpp"
#include <SkateMateCxx/SkateMateCxx-Swift.h>
#include <iostream>

// I think the omission of this constructor was the issue w/ SkateMateSessionCplusplus.hpp not being recognized by the package header mb?
SkateMateSessionCplusplus::SkateMateSessionCplusplus(SkateMatePeripheralCplusplus leftSkateMate, SkateMatePeripheralCplusplus rightSkateMate) : leftSkateMate(leftSkateMate), rightSkateMate(rightSkateMate) {}

bool SkateMateSessionCplusplus::initiateSkateMateSession(bool isLeft) const {
    return isLeft;
}
