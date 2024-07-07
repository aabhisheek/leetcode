class Solution {
    fun frequencySort(s: String): String {
        val arr = IntArray(size = 128) { 0 }
        val pQueue = PriorityQueue<Pair<Int, Int>>(compareByDescending { it.second })
        s.forEach { arr[it.toInt()]++ }
        
        arr.forEachIndexed { index, i -> 
            pQueue.offer(Pair(index, i))
        }
        
        val strOut = StringBuilder()
        while (pQueue.isNotEmpty()) {
            val (charInt, freq) = pQueue.poll()
            repeat(freq) {
                strOut.append(charInt.toChar())
            }
        }

        return strOut.toString()
    }
}