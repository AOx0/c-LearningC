//
//  main.swift
//  C2Swift
//
//  Created by Alejandro D on 11/08/20.
//

import Foundation
//"/Users/alejandro/CTestData.txt"

public func writeFile(withPath path : String, content : String) {
    im_wF(path, content)
}

public func readFile(withPath path: String) -> String {
    return String(cString: im_rF(path)!)
}

public func runCFunction() {
    cFunction()
}

writeFile(withPath: "CTestData.txt", content: "Hello World 2")

let contents = readFile(withPath: "CTestData.txt")
print(contents)
