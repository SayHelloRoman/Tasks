from threading import Thread
import uuid
import os

import requests
from bs4 import BeautifulSoup


class Main:
    def __init__(self):
        link = [
            "https://www.freevector.com",
            "https://www.vecteezy.com/free-vector/python"
        ]
        count_image = 0
        
        for i in link:
            rq = BeautifulSoup(requests.get(i).text)
            for x in rq.find_all("img"):
                if count_image == 100:
                    break
                    
                if i == link[0]:
                    Thread(target=Main.save, args=(i + x.get("src"),)).start()
                
                else:
                    Thread(target=Main.save, args=(x.get("src"),)).start()
                
                count_image += 1

    @staticmethod
    def save(src):
        x = requests.get(src, stream=True)
        with open(str(uuid.uuid1()) + ".png", "wb") as f:
            for chunk in x.iter_content():
                f.write(chunk)

if __name__ == "__main__":
    if not os.path.isdir("ladno"):
        os.mkdir("ladno")
    
    os.chdir("ladno")
    Main() 