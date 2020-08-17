// swift-tools-version:5.3
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "TestC",
    dependencies: [],
    targets: [
        .target(name: "CFunctions"),
        .target(
            name: "TestC",
            dependencies: ["CFunctions"]),
        
        /*.testTarget(
            name: "TestCTests",
            dependencies: ["TestC"]),*/
        
    ]
)
