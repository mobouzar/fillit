# fillit

It’s nearing the end of my second month at 1337, where I am working towards becoming a software developer. For our first algorithms project, we were tasked with the problem:

Given a set of Tetrominoes, find a way to assemble them in the smallest possible square.

# The Problem

A Tetrimino block is a shape made up of 4 consecutive characters. You’ve probably seen Tetrominoes in the popular game, Tetris. For the purpose of this puzzle, Tetrominoes are considered fixed, meaning that they cannot be rotated and there are a total of 19 possible pieces that can be provided as input, as pictured below:

![Drag Racing](https://miro.medium.com/max/1000/0*gJcuJXLaaJGUp2aT.)

# The Goal

The goal of the puzzle is to find the smallest possible square board that the tetrominoes can fit in. Below is an examples of input and the desired solutions:

![Drag Racing](https://miro.medium.com/max/1600/0*Vivh_fpoMHhmqesp.)

# Compiling

Run `make`, an executable called `fillit` should compile directly. Please submit an issue if you run into any.

# Usage

```
./fillit [file]
```

Example :

```
./fillit samples/test_8

.AABB..
AACCB..
.CC.BDD
.EE.DD.
EEFFGG.
.FFGGHH
....HH.
```
