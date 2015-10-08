# Shaolin Steps : solution

## Short answer: ```112```

## Method

Set up a mathematical equation by calculating how many jumps does the monk make on each run segment.

* First monk runs half way down at the speed of four steps: ```(n/2)/4```
* Than he runs half way up at the speed of three steps: ```(n/2)/3```
* Than he runs all the way down at the speed of four steps: ```n/4```
* Than he runs all the way up at the speed of three steps: ```n/3```

So for a total number of jumps: ```99 = n/8 + n/6 + n/4 + n/3```
This gives you ```n ~ 113.14``` ???

Why did you not get a whole number of steps?
Because number of steps does not need to be divisible by 4 or by 3 so monk can "overjump" on his last jump on the segment.
A little more calculation around 113 will give you a real number of steps: ```112```

## Program output

jump=0 step=112
####################
jump=1 step=108
jump=2 step=104
jump=3 step=100
jump=4 step=96
jump=5 step=92
jump=6 step=88
jump=7 step=84
jump=8 step=80
jump=9 step=76
jump=10 step=72
jump=11 step=68
jump=12 step=64
jump=13 step=60
jump=14 step=56
####################
jump=15 step=59
jump=16 step=62
jump=17 step=65
jump=18 step=68
jump=19 step=71
jump=20 step=74
jump=21 step=77
jump=22 step=80
jump=23 step=83
jump=24 step=86
jump=25 step=89
jump=26 step=92
jump=27 step=95
jump=28 step=98
jump=29 step=101
jump=30 step=104
jump=31 step=107
jump=32 step=110
jump=33 step=113 (overjump)
113->112
####################
jump=34 step=108
jump=35 step=104
jump=36 step=100
jump=37 step=96
jump=38 step=92
jump=39 step=88
jump=40 step=84
jump=41 step=80
jump=42 step=76
jump=43 step=72
jump=44 step=68
jump=45 step=64
jump=46 step=60
jump=47 step=56
jump=48 step=52
jump=49 step=48
jump=50 step=44
jump=51 step=40
jump=52 step=36
jump=53 step=32
jump=54 step=28
jump=55 step=24
jump=56 step=20
jump=57 step=16
jump=58 step=12
jump=59 step=8
jump=60 step=4
jump=61 step=0
####################
jump=62 step=3
jump=63 step=6
jump=64 step=9
jump=65 step=12
jump=66 step=15
jump=67 step=18
jump=68 step=21
jump=69 step=24
jump=70 step=27
jump=71 step=30
jump=72 step=33
jump=73 step=36
jump=74 step=39
jump=75 step=42
jump=76 step=45
jump=77 step=48
jump=78 step=51
jump=79 step=54
jump=80 step=57
jump=81 step=60
jump=82 step=63
jump=83 step=66
jump=84 step=69
jump=85 step=72
jump=86 step=75
jump=87 step=78
jump=88 step=81
jump=89 step=84
jump=90 step=87
jump=91 step=90
jump=92 step=93
jump=93 step=96
jump=94 step=99
jump=95 step=102
jump=96 step=105
jump=97 step=108
jump=98 step=111
jump=99 step=114 (overjump)
114->112

## Other valid combinations of the same problem
steps=4, jumps=06
steps=9, jumps=11
steps=16, jumps=15
steps=21, jumps=20
steps=28, jumps=27
steps=33, jumps=32
steps=40, jumps=36
steps=45, jumps=41
steps=52, jumps=48
steps=57, jumps=53
steps=64, jumps=57
steps=69, jumps=62
steps=76, jumps=69
steps=81, jumps=74
steps=88, jumps=78
steps=93, jumps=83
steps=100, jumps=90
steps=105, jumps=95
steps=112, jumps=99  *
steps=117, jumps=104
steps=124, jumps=111
steps=129, jumps=116
steps=136, jumps=120
steps=141, jumps=125
steps=148, jumps=132
steps=153, jumps=137
steps=160, jumps=141
steps=165, jumps=146
steps=172, jumps=153
steps=177, jumps=158
steps=184, jumps=162
steps=189, jumps=167
steps=196, jumps=174


