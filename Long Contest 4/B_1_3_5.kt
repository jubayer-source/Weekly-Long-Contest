fun main() {
    val t = readLine()!!.toInt()

    repeat(t) {
        val n = readLine()!!.toInt()
        var minOneBurle = n

        for (a in 0..(n / 5)) { 
            for (b in 0..(n / 3)) { 
                val total = a * 5 + b * 3
                if (total <= n) {
                    val remaining = n - total
                    minOneBurle = minOf(minOneBurle, remaining)
                }
            }
        }

        println(minOneBurle)
    }
}
