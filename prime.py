import time

def is_prime(num):
    if num <= 1:
        return False
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True

def main():
    start_time = time.time()

    print("Prime numbers up to 1000:")
    for i in range(2, 1001):
        if is_prime(i):
            print(i, end=" ")

    end_time = time.time()
    elapsed_time = end_time - start_time
    print(f"\nTime taken: {elapsed_time:.6f} seconds")

if __name__ == "__main__":
    main()
