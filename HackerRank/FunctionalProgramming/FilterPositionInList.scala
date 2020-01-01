
def f(arr:List[Int]):List[Int] = {
    val l = arr.length.toInt - 1
    (for(i <- 0 to l if(i%2 == 1)) yield i)
        .toList
        .map(x => arr(x))
}
