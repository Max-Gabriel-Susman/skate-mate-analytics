//
//  SkateMatePairingCplusplus.hpp
//  SkateMateCxx
//
//  Created by Max Gabriel Susman on 8/21/24.
//  Copyright © 2024 Apple. All rights reserved.
//

#pragma once

class SkateMateSessionCplusplus {
public:
    // I think the omission of this constructor was the issue w/ SkateMateSessionCplusplus.hpp not being recognized by the package header mb?
    SkateMateSessionCplusplus(bool printInvocation);
    double initiateSkateMateSession(double value) const;
private:
    bool printInvocation;
};
