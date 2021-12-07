+ Source\t\t\t\t				  Alternative 1\t\t\t\t					      Alternative 2
+ a == b				  b == a	 
+ a != b				  !(a == b)				            !(b == a)
+ a <=> b         0 <=> (b <=> a)	 
+ a < b				    (a <=> b) < 0			          (b <=> a) > 0
+ a <= b				  (a <=> b) <= 0			        (b <=> a) >= 0
+ a > b				    (a <=> b) > 0			          (b <=> a) < 0
+ a >= b				  (a <=> b) >= 0			        (b <=> a) <= 0
