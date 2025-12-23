#### 2. Array ADT						         
	
---

> Arrays in Compilers			                                                    </br>

```

1. How a Complier handles Array 
                  or manage Array

  A  Index   
+---+
| 3 |  0
+---+
| 5 |  1
+---+  
| 7 |  2
+---+  
| 9 |  3
+---+  
| 8 |  4
+---+

```
>> Addr(A[i]) = L0 + i * w           
>>> Addr(A[i])  : A[i]¿« ¡÷º“                                                        </br>
>>> L0          : Base Address                                                      </br>
>>> i           : index                                                             </br>
>>> w           : Size of Data Type                                                 </br>
---
> Row major mapping	                                                                     </br>
>> Addr(A[1][2]) = 200 + [ 1 * 4 + 2 ] * 2                                               </br>
>> Addr(A[2][3]) = 200 + [ 2 * 4 + 3 ] * 2                                               </br>
>> index[0] start ex: C, C++ -> Addr(A[i][j]) =  L0 + [ i * n + j ] * w                   </br>
>> index[1] start ex: Fortlan -> Addr(A[i][j]) =  L0 + [ ( i - 1 ) * n + ( j - 1 ) ] * w  </br>

---
> Column major mapping                                                                   </br>
>> Addr(A[1][2]) = 200 + [ 2 * 3 + 1 ] * 2                                               </br>
>> Addr(A[2][3]) = 200 + [ 3 * 3 + 2 ] * 2                                               </br>
>> Addr(A[i][j]) =  L0 + [ j * m + i ] * w                                               </br>

```
four Dimension Fomula

type A[D1][D2][D3][D4]

Row-major       -> Addr(A[i1][i2][i3][i4]) = L0 + •“_{p=1}^n ip °§ •–_ {q=p+1}^n L_q
Column-major    -> Addr(A[i1][i2][i3][i4]) = L0 + •“_{p=1}^n ip °§ •–_ {q=0}^{p-1} L_q




```

---
- Array as Abstract Data Type                                                       </br>
-  
---
- Display(), Add(), Append(), Insert()												</br>
---
- Delete()																			</br>
---
- Linear Search																		</br>
```

```
---
- Improvement Linear Search															</br>
---
- Binary Search																		</br>
---
- Get(), Set(), Max(), Sum(), Min()       											</br>
---
- Reverse : Left Shift	                                                            </br>
---
		  : Left Rotate	                                                            </br>
---
		  : Right Shift	                                                            </br>
---
		  : Right Rotate                                                            </br>
---
- Inserting in a sorted array														</br>
---
- Checking if an Array is sorted													</br>
---
- Arranging all negative elemnets on Left side, Positive elements on Right side     </br>
---
- Merge : Set Operations                                                            </br>
---
        : Union			                                                            </br>
---
        : Intersection                                                              </br>
---
        : Difference                                                                </br>
---
        : Set membership                                                            </br>
---
- Find Missing Element																</br>
---
- Finding Duplicate Elements														</br>
---
- Find a pair with sum k (a + b = k)												</br>
---
- Finding MAX and Min in a single scan  
---