# 110703048-DS-HW4
作者：廖家樂 (資科二)

1.A picture of the graph with 𝑥 = 100.

 ![image](https://user-images.githubusercontent.com/94668166/212936397-fe6dd7b0-63f1-4a14-993e-50bcffa7c8c5.png)

這個圖是用 opengl 搭配C++劃出來得。程式碼相關的資訊因為太佔版面，所以我已經將這次作業用到的程式碼放在github上，再麻煩教授點擊連結查看，謝謝教授。

2.Responses to the following questions:

I.What is the relationship between 𝑥 and 𝑑? 

 ![image](https://user-images.githubusercontent.com/94668166/212936489-9839d051-4a04-4c31-90f3-06856631742b.png)

由結果可知，當X越大，d就越小，而且是以指數速度下降，最後趨向 
d=5.5。原因是當可以走的路越來越多，自然就不會需要走那麼多的路才能到達目的地。

II.What is the relationship between 𝑦 and 𝑑?

 ![image](https://user-images.githubusercontent.com/94668166/212936549-5650bb37-2a2b-4852-b563-4ec3438a562a.png)

由結果可知，當y越大，d就越大，而且有點像線性成長。原因是，本來
加的邊是要讓source可以更快到達destination，但是如果每條邊的weight都很大，就好像是牆壁一樣，即便有了也沒用，不會比繞路來的快，所以最後花的時間越來越多，最終會趨向沒有增加edge一樣。


III.How to choose 𝑧 to obtain a reasonable approximation of the true average shortest distance between all pairs of source and destination? 

選擇不同數量的sample值，對結果或多或少會有不同，尤其一開始和實際結果一定會相差不少，但是當 z 由小漸漸增大時，我們可以發現它會漸漸趨近一個值(也就是數學上的 收斂 )，所以我們不需要實際的算出一個值，而是去尋找當 z 大到多少時，時間會開始收斂，此時的 Z 正是可以合理代表整體平均所需要的sample數量。

IV.Which implementation of Dijkstra's Algorithm is faster?

這次我挑選的是binary_heap和 fibonacci_heap。雖然就理論來說，fibonacci應該要較快，但由結果可以得知在資料較少時，binary是較快一點點的，而在資料多時fibonacci才會較快。原本對於結果感到怪怪的，但仔細思考過後，其實挺合理的，因為fibonacci雖然amortize之後的時間較快，但每回合也要做較多的步驟(expose，merge…)，所以在資料不多時，反而fibonacci還是要做較多的事，於是就慢了下來。

3.程式碼來源
https://github.com/mehulthakral/dijkstra-using-different-heaps 

4.心得
我覺得這次的作業出的非常好，讓我學習到很多的東西，也能充分利用上課學到的Dijhkstra 演算法，以及如何儲存graph在電腦裡，途中遇到了許多困難，但最後都有一一化解。在這次的作業中我主要學習到了如何使用opengl 來讓我們用C++繪圖。以前一直以為繪圖是python的專項，所以在開始寫作業前很緊張（因為我根本不會python)後來上網查詢後才發覺，原來只要搭配OpenGL就可以了，而且我也藉此練習了如何上網找資料來安裝環境。在安裝OpenGL時我也遇到了一些困難，就是網路上教的方法在我的viscode 上沒有用，所以百思不解的情況下，我改成以Linux安裝的方式，最後終於搞定。除了OpenGL 以外，我也增強了查詢資料的能力，因為在找dijkstra的演算法時，一直google不到heap的演算法，但是用boost c++，又要安裝不少東西，最後我想起來還有GitHub ，沒想到一查就有，而且還很多，讓我知道以後找程式碼還是要以GitHub為主。
最後真的非常感謝教授這學期帶給我們這麼棒的資料結構課程，教授您真的是我在政大看過最會教的教授了！祝教授新年快樂！


5.數據
本次作業的數據皆是寫程式跑出來的，而數據在下方。

 ![image](https://user-images.githubusercontent.com/94668166/212936751-e9c6b96a-18c0-42d1-b142-bbf74da867fc.png)
![image](https://user-images.githubusercontent.com/94668166/212936796-666cd2a2-0b6a-407e-8638-40c1354f2324.png)
