+ Source&ensp;&ensp;&ensp;&ensp; &ensp;Alternative1&ensp;&ensp;&ensp;&ensp;Alternative 2
+ a == b&ensp;&ensp;&ensp;&ensp;&ensp;b == a
+ a != b&ensp;&ensp;&ensp;&ensp;&ensp; (a == b)&ensp;&ensp;&ensp;&ensp;!(b == a)
+ a <=> b&ensp;&ensp;&ensp;&ensp;0 <=> (b <=> a)
+ a < b&ensp;&ensp;&ensp;&ensp;&ensp;(a <=> b) < 0&ensp;&ensp;&ensp;&ensp;(b <=> a) > 0
+ a <= b &ensp;&ensp;&ensp;&ensp; (a <=> b) <= 0&ensp;&ensp;&ensp;&ensp;(b <=> a) >= 0
+ a > b &ensp;&ensp;&ensp;&ensp; (a <=> b) > 0 &ensp;&ensp;&ensp; &ensp;(b <=> a) < 0
+ a >= b &ensp;&ensp;&ensp;&ensp;(a <=> b) >= 0&ensp;&ensp;&ensp;&ensp;(b <=> a) <= 0
