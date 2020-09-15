from random import *

throw=0
while throw!=q:
    print("주사위를 시작합니다. 숫자는")
    print(randint(1,6))
    throw = int("아무키나 눌러주세요. q를 누르면 종료됩니다.")