def f(arr:List[Int]):Int = {
    arr.foldLeft(0){ (len, ele) => len+1}
}