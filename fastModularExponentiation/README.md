# Modular Exponentiation
In cryptography it is important to be able to find `b^n mod m` efficiently without using an excessive amount of memory, where `b`, `n`, and `m` are large integers. It is impractical to first compute `b^n` and then find its remainder when divided by `m`, because `b^n` can be a huge number and we will need a huge amount of computer memory to store such numbers. Instead, we can avoid time and memory problems by using an algorithm that employs the binary expansion of the exponent `n`. 

Reference: [Discrete mathematics and its applications, Kenneth H. Rosen, 2018](https://g.co/kgs/r2FtpH)


## Examples
`fastModularExponentiation(3, 644, 645) ➞ 36`

