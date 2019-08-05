initial_hour, initial_minute, final_hour, final_minute = [int(x) for x in input().split()]
	
hour = final_hour - initial_hour
minute = final_minute - initial_minute

if hour <= 0 and minute <= 0:
    hour += 24

if minute < 0:
    hour -= 1
    minute += 60

print('O JOGO DUROU {0} HORA(S) E {1} MINUTO(S)'.format(hour, minute))
