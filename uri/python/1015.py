

def distance(x1, y1, x2, y2):
    dist = (((x2 - x1) ** 2) + ((y2 - y1) ** 2)) ** (1/2)
    return round(dist, 4)


def format_time(seconds):
    hours = seconds // 3600
    minutes = (seconds % 3600) // 60
    seconds = (seconds % 3600) % 60
    return '{0}:{1}:{2}'.format(hours, minutes, seconds)


if __name__ == '__main__':
    # x1, y1 = [float(x) for x in input().split()]
    # x2, y2 = [float(y) for y in input().split()]
    # time_event = int(input())
    # print('{:.4f}'.format(distance(x1, y1, x2, y2)))
    # print('{0}:{1}:{2}'.format(format_time(time_event)))
    # ...ou...
    # testes acaso tiver preguiça de digitar as entradas 500 vzs como eu
    assert distance(1.0, 7.0, 5.0, 9.0) == 4.4721, 'Deu ruim no ex. 6'
    assert distance(-2.5, 0.4, 12.1, 7.3) == 16.1484, 'Deu ruim no ex. 6'
    assert distance(2.5, -0.4, -12.2, 7.0) == 16.4575, 'Deu ruim no ex. 6'
    assert format_time(556) == '0:9:16', 'Deu ruim no ex. 8'
    assert format_time(1) == '0:0:1', 'Deu ruim no ex. 8'
    assert format_time(140153) == '38:55:53', 'Deu ruim no ex. 8'
