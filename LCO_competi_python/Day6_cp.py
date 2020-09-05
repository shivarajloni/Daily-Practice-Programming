# a floppy disk shows F bytes free and U bytes used. if you delete a file of size O bytes and create a new file
# of size N bytes, how many free bytes will the floppy disk have? F U O N are user-entered values..

F = int(input("Enter Free disk size in bytes.."))
U = int(input("Enter Used disk size in bytes.."))
O = int(input("Enter Old disk size in bytes.."))
N = int(input("Enter new file size in bytes.."))

totalDiskSize = F+U

currentUsedDiskSize = U-O 

currentUsedDiskSize = currentUsedDiskSize+N 
currentFreeDiskSize = totalDiskSize-currentUsedDiskSize

print("Free Space Available", currentFreeDiskSize, "bytes")


# correct program.. getting the correct output...