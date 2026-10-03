# waka waka
import time

def say(sentence, second):
	print(sentence)
	time.sleep(second)

sentences = [
("Waka", 0.2),
("Waka", 1),
("Wiki", 0.2),
("Wiki", 1),
("", 0),
("Waka", 0.2),
("Waka", 1),
("Wiki", 0.2),
("Wiki/n", 1)
]

for sentence, second in sentences:
	say(sentence, second)
