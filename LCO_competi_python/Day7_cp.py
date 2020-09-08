# The city's bus system carries 1,200,000 prople each day. How many people does the bus system carry each year? (1 year = 365days)
# solve without using *,/ operator, bitwise operator or loop

def multiply(x,y):
	if(y == 0):
		return 0
	if(y > 0):
		return (x + multiply(x, y-1))
	if(y < 0):
		return -multiply(x, -y)

peopleTravelDaily = 1200000;
daysOfYear = 365;
peopleTravelYearly = multiply(peopleTravelDaily,daysOfYear);

print(peopleTravelYearly)