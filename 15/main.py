from enum import Enum

import pygame


class Size(Enum):
    MAX_X = 0
    MIN_X = -512
    MAX_Y = 0
    MIN_Y = -350


pygame.init()
screen = pygame.display.set_mode([1400, 700])
beach = pygame.image.load("beach.jpg")
clock = pygame.time.Clock()
font = pygame.font.SysFont("Verdana", 48)

running = True
x, y = -480, -256

while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False

    if pygame.mouse.get_focused():
        pos = pygame.mouse.get_pos()
        if pos[0] < 200 and (x + 2) < Size.MAX_X.value and (x + 2) > Size.MIN_X.value:
            x += 2
        
        elif pos[0] > 1200 and (x - 2) < Size.MAX_X.value and (x - 2) > Size.MIN_X.value:
            x -= 2
        
        if pos[1] < 200 and (y + 1) < Size.MAX_Y.value and (y + 1) > Size.MIN_Y.value:
            y += 1
        
        elif pos[1] > 500 and (y - 1) < Size.MAX_Y.value and (y - 1) > Size.MIN_Y.value:
            y -= 1

    beach_rect = beach.get_rect(topleft=(x, y))
    screen.blit(beach, beach_rect)

    fps = font.render(str(round(clock.get_fps())), False, (255, 255, 255))
    screen.blit(fps, (0, 0))

    pygame.display.update()
    clock.tick(120)

pygame.quit()