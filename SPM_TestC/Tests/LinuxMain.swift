import XCTest

import TestCTests

var tests = [XCTestCaseEntry]()
tests += TestCTests.allTests()
XCTMain(tests)
