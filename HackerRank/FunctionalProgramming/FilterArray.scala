def f(delim:Int,arr:List[Int]):List[Int] = {
    // for(i <- arr if i < delim) yeild i
    var ans = List[Int]()
    arr.foreach( x => if(x < delim) ans :+= x)
    ans
}
