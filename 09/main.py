def pig_it(text):
    if text[-1] not in "!?":
        return " ".join((i[1:]+i[0]+"ay" for i in text.split()))
    
    return " ".join((i[1:]+i[0]+"ay" for i in text.split()))[:-2]