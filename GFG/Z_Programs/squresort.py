
def squaresort(mylist):
	if len(mylist) in (0, 1):
		return mylist
	
	point1 = 0
	point2 = len(mylist)-1
	
	while(point1 < point2):
		if mylist[point1] ** 2 > mylist[point2] ** 2:
			temp = mylist[point1]
			mylist[point1] = mylist[point2]
			mylist[point2] = temp
		point2 -= 1
	return mylist
		

if __name__ == "__main__":
	
	n = int(input())
	
	list_inp = list(map(int, input().split()))[:n]
	
	print(squaresort(list_inp))
