#Programma creato da Kekko01 (https://github.com/Kekko01), disponibile su GitHub https://github.com/Kekko01/Numeri-Primi-su-TXT
#Canale Telegram: https://t.me/Numeri_Primi

from os import path
import telepot
from telepot.namedtuple import InlineKeyboardMarkup, InlineKeyboardButton

telegrambot = telepot.Bot("TELEGRAM_API")   #Qui tra gli apici va' inserito la key che vi da Telegram

channel_id_num = 0  #Qui va inserito il Channel ID della chat in cui volete condividere il numero
channel_id_file = 0 #Qui va inserito il Channel ID della chat in cui volete condividere il numero

def main():
    div=2
    num=0
    if path.exists("Numeri Primi.txt"):
        with open("Numeri Primi.txt","r") as f:
            for i in f:
                num=int(i.strip())
        num+=1
    while True:
        div=2
        while num%div!=0 and div<num/2:
            div+=1
        if num%div!=0:
            telegrambot.sendMessage(channel_id_num, str(num))
            with open("Numeri Primi.txt","a") as f:
                print(num,file=f)
            print("Trovato",num,", inserimento nel file: Numeri Primi.txt completato!")
            telegrambot.sendDocument(channel_id_file, open('Numeri Primi.txt','rb'),str(num))
        num+=1

main()
