//
//  SkateMatePairingCplusplus.hpp
//  SkateMateCxx
//
//  Created by Max Gabriel Susman on 8/21/24.
//  Copyright © 2024 Apple. All rights reserved.
//

#pragma once

class SkateMatePeripheralCplusplus {
public:
    SkateMatePeripheralCplusplus();
};


class SkateMateSessionCplusplus {
public:
    // I think the omission of this constructor was the issue w/ SkateMateSessionCplusplus.hpp not being recognized by the package header mb? will want to keep in mind whilst extending SkateMateCxx
    SkateMateSessionCplusplus(SkateMatePeripheralCplusplus leftSkateMate, SkateMatePeripheralCplusplus rightSkateMate);
    bool initiateSkateMateSession(bool value) const;
private:
//    bool leftSkateMate;
//    bool rightSkateMate;
    SkateMatePeripheralCplusplus leftSkateMate;
    SkateMatePeripheralCplusplus rightSkateMate;
};
