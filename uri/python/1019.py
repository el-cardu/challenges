time_event = int(input())

hours = time_event // 3600
minutes = (time_event % 3600) // 60
seconds = (time_event % 3600) % 60

print('{0}:{1}:{2}'.format(hours, minutes, seconds))
