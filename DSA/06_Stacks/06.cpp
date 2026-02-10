// p +- q -> Infix [ <operand> <operator> <operand> ]
// (a * b) + (p * q) -> Infix 
// Order of Operations : 
// 1. Brackets () {} []
// 2. Exponents ( Right -> Left) 2^3^2
// 3. MUL & DIV
// 4. ADD & SUB


// Prefix [ <operator> <operand> <operand> ] [ Polish Notation]
// (2 + 3) -> (+ 2 3)
// (a + (b * c)) -> (+ a * b c)
// ((a / b) - c) + (d * e) -> (+ - / a b c * d e)
// (- + 7 * 4 5 + 2 0) -> (2 + 0) (4 * 5) (7 + 20) (27 - 2)
// Operand -> Push to stack
// Operator <operand1> <operator> <operand2>
// Pop 2 elements from stack
// Apply the operator
// Push the result back in stack


// Postfix [ <operand> <operand> <operator> ] [ Reverse Polish ]
// (2 + 3) -> (2 3 +)
// ((a * b) + c) -> (a b * c +)
// (a * b - c / d) -> (a b * c d / -)
