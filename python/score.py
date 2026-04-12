import csv
# calculate populatrity of problem
score={}


with open("favorite.csv","r") as f:
    # load the csv file
    reader=csv.DictReader(f)  # In docs, it gives dictionaries
    for row in reader:
        faviouratLan = row["problem"]
        if faviouratLan in score: # to avoid error
            score[faviouratLan]+=1
        else:
            score[faviouratLan]=1 # seeing a problem for 1st time
    
favorite=input("Favorite : ")
if favorite in score:
    print(f"{favorite} : {score[favorite]}")

