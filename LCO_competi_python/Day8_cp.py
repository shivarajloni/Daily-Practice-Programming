


def avgWork(a,b,c,d,e,f, nCount):
	totalHrs = float(a + b + c + d + e + f)
	temp = float(totalHrs + nCount)
	avgHrs = totalHrs / nCount

	return avgHrs


nHoward = 8
nPease = 10
nCampbell = 9
nGrace = 8
nMcCarthy = 7
nMurphy = 12
nurseCount = 6


avgHours = avgWork(nHoward, nPease, nCampbell, nGrace, nMcCarthy, nMurphy, nurseCount)

print("Average Hours is", avgHours) 