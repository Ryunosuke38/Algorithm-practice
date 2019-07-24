import random
import parsecsv
from os import paramStr
from streams import newFileStream

proc getShuffleLuncher*(): seq[string] =
    var users: seq[string]

    var s = newFileStream("users.csv", fmRead)
    if s == nil:
        quit("cannot open the file" & "users.csv")

    var x: CsvParser
    open(x, s, "users.csv")
    while readRow(x):
        for val in items(x.row):
            users.add(val)
    close(x)

    let userNum = users.len
    var shuffleNum: seq[int]
    for i in 0..(userNum - 1):
        shuffleNum.add(i)

    for i in 0..shuffleNum.len - 1:
        randomize()
        let rnd = rand(shuffleNum.len - 1)
        let tmp = users[i]
        users[i] = users[rnd]
        users[rnd] = tmp

    return users
