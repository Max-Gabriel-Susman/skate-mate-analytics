/*
See the LICENSE.txt file for this sample’s licensing information.

Abstract:
Implements the Swift API.
*/

public struct SkateMateSession {
    private let leftSkateMate: SkateMatePeripheralCplusplus
    private let rightSkateMate: SkateMatePeripheralCplusplus
    
    public init(leftSkateMate: SkateMatePeripheralCplusplus, rightSkateMate: SkateMatePeripheralCplusplus) {
        self.leftSkateMate = leftSkateMate
        self.rightSkateMate = rightSkateMate
    }

    public func initiateSkateMateSession(_ value: Bool) -> Bool {
        let cxxSession = SkateMateSessionCplusplus(leftSkateMate, rightSkateMate)
        
        return cxxSession.initiateSkateMateSession(true)
    }
}
