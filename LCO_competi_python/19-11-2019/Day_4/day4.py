totalHotDog = 400
totalHotDogPerContainer = 8
totalContainer = 0
while(totalHotDog >= totalHotDogPerContainer):
    totalHotDog -= totalHotDogPerContainer
    totalContainer += 1
    print("Jack buy total", totalContainer, "containers")