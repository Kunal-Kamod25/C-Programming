def main():
    n = int(input("Enter number of elements: "))

    A = []  # in Python, lists grow dynamically

    print(f"Enter {n} elements:")
    for i in range(n):
        val = int(input())
        A.append(val)

    print("You entered:", end=" ")
    for i in range(n):
        print(A[i], end=" ")

if __name__ == "__main__":
    main()
