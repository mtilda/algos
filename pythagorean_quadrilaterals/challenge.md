# Pythagorean Quadrilaterals

Source: [Project Euler: Problem 723](https://projecteuler.net/problem=723)

### Challenge

A pythagorean triangle with catheti `a` and `b` and hypotenuse `c` is characterized by the well-known equation <img src="http://www.sciweavers.org/tex2img.php?eq=a%5E%7B2%7D%2Bb%5E%7B2%7D%3Dc%5E%7B2%7D&bc=Transparent&fc=Black&im=png&fs=12&ff=arev&edit=0" alt="a^{2}+b^{2}=c^{2}" />. However, this can also be formulated differently:

When inscribed into a circle with radius `r`, a triangle with sides `a`, `b` and `c` is pythagorean, if and only if `a²+b²+c²=8r²`.

Analogously, we call a quadrilateral `ABCD` with sides `a`, `b`, `c` and `d`, inscribed in a circle with radius `r`, a pythagorean quadrilateral, if `a²+b²+c²=8r²`.

We further call a pythagorean quadrilateral a *pythagorean lattice grid quadrilateral*, if all four vertices are lattice grid points with the same distance `r` from the origin `O` (which then happens to be the centre of the circumcircle).

Let `f(r)` be the number of different pythagorean lattice grid quadrilaterals for which the radius of the circumcircle is `r`. For example `f(1)=1`, `f(√2)=1`, `f(√5)=38` and `f(5)=167`.

Two of the pythagorean lattice grid quadrilaterals with `r=√5` are illustrated below:

!["A coordinate grid containing a circle with radius r, centered at the origin. Inscribed in the circle is a quadralateral with vertices labled ABCD and sides labled abcd"](https://projecteuler.net/project/images/p723_1.png)

!["Another quadrilateral inscribed in a circle just as before but with different side lengths"](https://projecteuler.net/project/images/p723_2.png)

Let <img src="http://www.sciweavers.org/tex2img.php?eq=%5Cdisplaystyle%20S%28n%29%3D%5Csum_%7Bd%20%5Cvert%20n%7D%20f%28%5Csqrt%20d%29&bc=Transparent&fc=Black&im=png&fs=12&ff=arev&edit=0" alt="S(n)=\sum_{d | n} f(√d)" style="vertical-align: middle;" />. For example, `S(325) = S(5²*13) = f(1) + f(√5) + f(5) + f(√13) + f(√65) + f(5√13) = 2370` and `S(1105) = S(5 × 13 × 17) = 5535`.

Find 
`S(1411033124176203125) = S(5^{6} × 13³ × 17² × 29 × 37 × 41 × 53 × 61)`.