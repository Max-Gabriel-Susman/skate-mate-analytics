/*
See the LICENSE.txt file for this sample’s licensing information.

Abstract:
Implements the Swift API.
*/

public struct SkateMateSession {
    private let printInvocation: Bool
    
    public init(printInvocation: Bool) {
        self.printInvocation = printInvocation
    }

    public func initiateSkateMateSession(_ value: Bool) -> Bool {
        // Print the value if applicable.
        if printInvocation {
            print("[swift] fibonacci(\(value))")
        }
        
        // Handle the base case of the recursion.
//        guard value > 1.0 else {
//            return 1.0
//        }
        
        // Create the C++ `FibonacciCalculatorCplusplus` class and invoke its `fibonacci` method.
        let cxxSession = SkateMateSessionCplusplus(printInvocation)
        //        let cxxCalculator = SkateMateSessionCplusplus(printInvocation)
        
        return cxxSession.initiateSkateMateSession(true)
//        return cxxCalculator.initiateSkateMateSession(value - 1.0) + cxxCalculator.initiateSkateMateSession(value - 2.0)
    }
}

//public struct SkateMateSession {
//    public func initiateSkateMateSession(isLeft: Bool) -> Bool {
//        var cxxSkateMateSession = SkateMateSessionCplusplus()
//        return cxxSkateMateSession.PairSkateMateCplusplus(isLeft)
//    }
//}
