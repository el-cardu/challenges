def latest(scores):
    return scores[-1]


def personal_best(scores):
    scores = list(sorted(scores))
    best = scores[-1]
    return best


def personal_top_three(scores):
    scores = list(sorted(scores))
    top_three = scores[-3:]
    top_three = top_three[::-1]
    return top_three
