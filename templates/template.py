import sys

def main():
    input = sys.stdin.read
    print = sys.stdout.write

    # Code Here
    data = input().strip()
    number = int(data)
    print(f"{number}")


if __name__ == "__main__":
    if 'ONLINE_JUDGE' not in sys.argv:
        sys.stdin = open('input.txt', 'r')
        sys.stdout = open('output.txt', 'w')
    main()
