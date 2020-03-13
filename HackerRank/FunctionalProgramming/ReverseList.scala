def f(arr:List[Int]):List[Int] =
    if(arr.length == 1) arr
    else f(arr.tail) :+ arr.head