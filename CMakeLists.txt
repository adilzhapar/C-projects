cmake_minimum_required(VERSION 3.17)
project(C__)

set(CMAKE_CXX_STANDARD 14)

add_executable(C__
        informatics/dp/b.cpp
        informatics/dp/c.cpp
        informatics/dp/d.cpp
        informatics/for/a.cpp
        informatics/for/b.cpp
        informatics/for/c.cpp
        informatics/for/g.cpp
        informatics/for/h.cpp
        informatics/for/i.cpp
        informatics/for/j.cpp
        informatics/for/k.cpp
        informatics/function/c.cpp
        informatics/function/d.cpp
        informatics/function/e.cpp
        informatics/function/f.cpp
        informatics/ifelse/a.cpp
        informatics/ifelse/b.cpp
        informatics/ifelse/c.cpp
        informatics/ifelse/d.cpp
        informatics/ifelse/e.cpp
        informatics/ifelse/g.cpp
        informatics/ifelse/h.cpp
        informatics/ifelse/i.cpp
        informatics/ifelse/j.cpp
        informatics/ifelse/k.cpp
        informatics/ifelse/l.cpp
        informatics/ifelse/m.cpp
        informatics/map/a.cpp
        informatics/map/c.cpp
        informatics/map/d.cpp
        informatics/map/f.cpp
        informatics/map/help.cpp
        informatics/map/i.cpp
        informatics/map/SortMapByValue.cpp
        informatics/map/synonim.cpp
        informatics/recursion/a.cpp
        informatics/recursion/a2.cpp
        informatics/recursion/b.cpp
        informatics/recursion/c.cpp
        informatics/recursion/c2.cpp
        informatics/recursion/d.cpp
        informatics/recursion/d2.cpp
        informatics/recursion/e.cpp
        informatics/recursion/f.cpp
        informatics/sets/a_1.cpp
        informatics/sets/a_2.cpp
        informatics/sets/b.cpp
        informatics/sets/b_1.cpp
        informatics/sets/b_2.cpp
        informatics/sets/c.cpp
        informatics/sets/c_1.cpp
        informatics/sets/d.cpp
        informatics/sets/d_1.cpp
        informatics/sets/e.cpp
        informatics/sets/e_1.cpp
        informatics/sets/intersec.cpp
        informatics/sets/set.cpp
        informatics/sets/union.cpp
        informatics/vector/a.cpp
        informatics/vector/b.cpp
        informatics/vector/c.cpp
        informatics/vector/d.cpp
        informatics/vector/e.cpp
        informatics/vector/f.cpp
        informatics/a.cpp
        informatics/a2.cpp
        informatics/a3.cpp
        informatics/CinTest.cpp
        informatics/main.cpp
        "week 3/lab_3/a.cpp"
        "week 3/lab_3/b.cpp"
        "week 3/lab_3/c.cpp"
        "week 3/lab_3/d.cpp"
        "week 3/lab_3/e.cpp"
        "week 3/lab_3/f.cpp"
        "week 3/lab_3/g.cpp"
        "week 3/lab_3/h.cpp"
        "week 3/lab_3/i.cpp"
        "week 3/lab_3/j.cpp"
        "week 3/lab_3/k.cpp"
        "week 3/lab_3/l.cpp"
        "week 3/lab_3/m.cpp"
        "week 3/lab_3/n.cpp"
        "week 3/lab_3/o.cpp"
        "week 3/lab_3/prime.cpp"
        "week 3/lab_3/square.cpp"
        "week 3/1.cpp"
        "week 3/2.cpp"
        "week 3/sort.cpp"
        "week 4/quiz 1/a.cpp"
        "week 4/quiz 1/a1.cpp"
        "week 4/quiz 1/b.cpp"
        "week 4/quiz 1/c.cpp"
        "week 4/quiz 1/d.cpp"
        "week 4/quiz 1/e.cpp"
        "week 4/quiz 1/f.cpp"
        "week 4/quiz 1/g.cpp"
        "week 4/quiz 1/h.cpp"
        "week 4/quiz 1/i.cpp"
        "week 4/quiz 1/j.cpp"
        "week 4/quiz 1/k.cpp"
        "week 4/quiz 1/l.cpp"
        "week 4/quiz 1/n.cpp"
        "week 4/quiz 1/o.cpp"
        "week 4/quiz 2/a.cpp"
        "week 5/informatics/a.cpp"
        "week 5/informatics/b.cpp"
        "week 5/lab4/a.cpp"
        "week 5/lab_4/a.cpp"
        "week 5/lab_4/b.cpp"
        "week 5/lab_4/c.cpp"
        "week 5/lab_4/d.cpp"
        "week 5/lab_4/e.cpp"
        "week 5/lab_4/f.cpp"
        "week 5/lab_4/g.cpp"
        "week 5/lab_4/h.cpp"
        "week 5/lab_4/i.cpp"
        "week 5/lab_4/j.cpp"
        "week 5/lab_4/k.cpp"
        "week 5/lab_4/l.cpp"
        "week 5/lab_4/n.cpp"
        "week 5/lab_4/o.cpp"
        "week 5/lab_4/p.cpp"
        "week 5/lab_4/q.cpp"
        "week 5/lab_4/spiral.cpp"
        "week 6/lab5/a.cpp"
        "week 6/lab5/b.cpp"
        "week 6/lab5/c.cpp"
        "week 6/lab5/d.cpp"
        "week 6/lab5/e.cpp"
        "week 6/lab5/f.cpp"
        "week 6/lab5/g.cpp"
        "week 6/lab5/h.cpp"
        "week 6/lab5/i.cpp"
        "week 6/lab5/j.cpp"
        "week 6/lab5/k.cpp"
        "week 6/lab5/l.cpp"
        "week 6/lab5/m.cpp"
        "week 6/lab5/n.cpp"
        "week 6/lab5/o.cpp"
        "week 6/lab5/p.cpp"
        "week 6/lab5/q.cpp"
        "week 7/informatics/a.cpp"
        "week 7/informatics/b.cpp"
        "week 7/lab6/a.cpp"
        "week 7/lab6/b.cpp"
        "week 7/lab6/c.cpp"
        "week 7/lab6/d.cpp"
        "week 7/lab6/e.cpp"
        "week 7/lab6/f.cpp"
        "week 7/lab6/g.cpp"
        "week 7/lab6/h.cpp"
        "week 7/lab6/i.cpp"
        "week 7/lab6/j.cpp"
        "week 7/lab6/k.cpp"
        "week 7/lab6/l.cpp"
        "week 7/lab6/m.cpp"
        "week 7/lab6/n.cpp"
        "week 7/lab6/o.cpp"
        "week 7/lab6/p.cpp"
        "week 7/lab6/q.cpp"
        "week 7/lab6/r.cpp"
        "week 7/ReadText.cpp"
        "week 8/quiz 2/a.cpp"
        "week 8/quiz 2/b.cpp"
        "week 8/quiz 2/c.cpp"
        "week 8/quiz 2/c2.cpp"
        "week 8/quiz 2/d.cpp"
        "week 8/quiz 2/e.cpp"
        "week 8/quiz 2/f.cpp"
        "week 8/quiz 2/g.cpp"
        "week 8/quiz 2/h.cpp"
        "week 8/quiz 2/i.cpp"
        "week 8/quiz 2/j.cpp"
        "week 9/lab_7/a.cpp"
        "week 9/lab_7/b.cpp"
        "week 9/lab_7/c.cpp"
        "week 9/lab_7/d.cpp"
        "week 9/lab_7/e.cpp"
        "week 9/lab_7/f.cpp"
        "week 9/lab_7/Fibb.cpp"
        "week 9/lab_7/Fibb2.cpp"
        "week 9/lab_7/Fibb3.cpp"
        "week 9/lab_7/g.cpp"
        "week 9/lab_7/i.cpp"
        "week 9/lab_7/j.cpp"
        "week 9/lab_7/k.cpp"
        "week 9/lab_7/l.cpp"
        "week 9/lab_7/m.cpp"
        "week 9/lab_7/myFibb.cpp"
        "week 9/lab_7/n.cpp"
        "week 9/lab_7/n2.cpp"
        "week 9/lab_7/o.cpp"
        "week 9/lab_7/o2.cpp"
        "week 9/sum_of_digits.cpp"
        mingw64tdm.7z)
