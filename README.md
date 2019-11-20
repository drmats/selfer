# selfer

My naive take on [quines](https://en.wikipedia.org/wiki/Quine_(computing)) in C.

<br />




## what?

Read the [Reflections on Trusting Trust](https://dl.acm.org/citation.cfm?id=358210).

<br />




## how?

```bash
$ gcc ./src.c && ./a.out > ./src2.c && diff -sq ./src.c ./src2.c && rm ./a.out src2.c
```
