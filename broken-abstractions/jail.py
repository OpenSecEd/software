#!/bin/env python3
import sys, os

JAIL_PATH = os.environ["HOME"]

def jailed_open(filename):
    return open(JAIL_PATH + "/" + filename)

def main(argv):
    f = jailed_open(argv[1])

    print("\\begin{verbatim}")
    for line in f.readlines():
        print(line.strip())
    print("\\end{verbatim}\n")

if __name__ == "__main__":
    main(sys.argv)
