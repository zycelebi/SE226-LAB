
def factorial(x):
    if x == 0 or x == 1:
        return 1
    return x * factorial(x - 1)

term = lambda x, n: (x ** n) / factorial(n)

def exp_x(x, n):
    total = 0
    for i in range(n + 1):
        total += term(x, i)
    return total

S = 0 

def calculate_series(n):
    global S

    if n == 0:
        return

    calculate_series(n - 1)
    S += ((-1) ** (n + 1)) / n


def main():
    global S

    print("- Factorial -")
    x = int(input("Enter x: "))
    print("Factorial:", factorial(x))

    print("\n- e^x Calculation -")
    x = float(input("Enter x: "))
    n = int(input("Enter n: "))
    print("Result:", exp_x(x, n))

    print("\n- Alternating Series -")
    S = 0  # reset global
    n = int(input("Enter n: "))
    calculate_series(n)
    print("Result:", S)


if __name__ == "__main__":
    main()