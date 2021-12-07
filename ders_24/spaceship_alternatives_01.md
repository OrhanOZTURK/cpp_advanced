+ Source&emsp;&emsp;&emsp;&emsp;Alternative1&emsp;&emsp;&emsp;&emsp;Alternative 2
+ a ==b&emsp;&emsp;&emsp;&emsp;b== a	 
+ a != b&emsp;&emsp;&emsp;&emsp;!(a == b)&emsp;&emsp;&emsp;&emsp;!(b == a)
+ a <=> b&emsp;&emsp;&emsp;&emsp;0 <=> (b <=> a)	 
+ a < b&emsp;&emsp;&emsp;&emsp;(a <=> b) < 0&emsp;&emsp;&emsp;&emsp;(b <=> a) > 0
+ a <= b&emsp;&emsp;&emsp;&emsp;(a <=> b) <= 0&emsp;&emsp;&emsp;&emsp;(b <=> a) >= 0
+ a > b&emsp;&emsp;&emsp;&emsp;(a <=> b) > 0&emsp;&emsp;&emsp;&emsp;(b <=> a) < 0
+ a >= b&emsp;&emsp;&emsp;&emsp;(a <=> b) >= 0&emsp;&emsp;&emsp;&emsp;(b <=> a) <= 0
