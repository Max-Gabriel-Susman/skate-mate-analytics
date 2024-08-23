import SwiftUI
import SkateMateCxx

func fibonacci(_ value: Double) -> Double {
    return FibonacciCalculator(printInvocation: true).fibonacci(value)
}

func initiateSkateMateSession(_ value: Bool) -> Bool {
    return SkateMateSession().initiateSkateMateSession(isLeft: value)
}

struct SkateMate: Identifiable {
    let id = UUID()
    let name: String
    let status: String
}

struct SkateMateDetail: Identifiable {
    let id = UUID()
    let detail: String
}

struct FibonacciView: View {
    // State variable to store result
    @State private var result: Double = fibonacci(5)

    // Sample data for the skate mates
    @State private var skateMates: [SkateMate] = [
        SkateMate(name: "Skate Mate L", status: "Paired"),
        SkateMate(name: "Skate Mate R", status: "Paired"),
    ]
    
    // Sample data for the tables under each skate mate
    @State private var skateMateLDetails: [SkateMateDetail] = [
        SkateMateDetail(detail: "X axis: 0.00"),
        SkateMateDetail(detail: "Y axis: 0.00"),
        SkateMateDetail(detail: "Z axis: 0.00")
    ]
    
    @State private var skateMateRDetails: [SkateMateDetail] = [
        SkateMateDetail(detail: "X axis: 0.00"),
        SkateMateDetail(detail: "Y axis: 0.00"),
        SkateMateDetail(detail: "Z axis: 0.00")
    ]

    var body: some View {
        VStack {
            Text("Skate Mate Analytics v0.0.0")
            
            // Adding a Button
            Button(action: {
                // Action to be performed when button is pressed
                result = fibonacci(10)
                print("Button pressed! Fibonacci(10) = \(result)")
            }) {
                Text("Pair Skate Mates")
            }
            .padding()
            .background(Color.blue)
            .foregroundColor(.white)
            .cornerRadius(8)

            Text("Pairing Skate Mates...")
            Text("Skate Mates paired")
            
            // Columns for each Skate Mate with additional tables
            HStack {
                // Skate Mate L with table
                VStack {
                    VStack {
                        Text(skateMates[0].name)
                            .font(.headline)
                        Text(skateMates[0].status)
                            .font(.subheadline)
                    }
                    .padding()
                    .background(Color.gray.opacity(0.2))
                    .cornerRadius(8)
                    
                    // Additional table for Skate Mate L
                    List(skateMateLDetails) { detail in
                        Text(detail.detail)
                    }
                    .frame(height: 100) // Adjust height as needed
                }
                
                Spacer()
                
                // Skate Mate R with table
                VStack {
                    VStack {
                        Text(skateMates[1].name)
                            .font(.headline)
                        Text(skateMates[1].status)
                            .font(.subheadline)
                    }
                    .padding()
                    .background(Color.gray.opacity(0.2))
                    .cornerRadius(8)
                    
                    // Additional table for Skate Mate R
                    List(skateMateRDetails) { detail in
                        Text(detail.detail)
                    }
                    .frame(height: 100) // Adjust height as needed
                }
            }
            .padding()
        }
        .padding()
    }
}

struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
        FibonacciView()
    }
}
