/*
See the LICENSE.txt file for this sample’s licensing information.

Abstract:
Implements the Swift API.
*/

//public struct SkateMatePeripheral {
//    public init() {}
//}

public struct SkateMateSession {
//    private let leftSkateMate: SkateMatePeripheral
//    private let rightSkateMate: SkateMatePeripheral
//    private let leftSkateMate: SkateMatePeripheralCplusplus
//    private let rightSkateMate: SkateMatePeripheralCplusplus
    public var leftSkateMate: SkateMatePeripheralCplusplus
    public var rightSkateMate: SkateMatePeripheralCplusplus
    
    public init(leftSkateMate: SkateMatePeripheralCplusplus, rightSkateMate: SkateMatePeripheralCplusplus) {
        self.leftSkateMate = leftSkateMate
        self.rightSkateMate = rightSkateMate
    }

    public func initiateSkateMateSession(_ value: Bool) -> SkateMateSessionCplusplus {
        let cxxSession = SkateMateSessionCplusplus(leftSkateMate, rightSkateMate)
        
        return cxxSession
    }
}
