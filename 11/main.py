season_dict = dict(
    zip(
        range(1, 5), ("winter", "spring", "summer", "september")
    )
)


def season(x: int) -> str:
    return "winter" if x == 12 else season_dict.get(int(x / 3) + 1)