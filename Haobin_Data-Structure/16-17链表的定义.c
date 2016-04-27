
***************************************************************************************************************************
						16.链表的定义
						17.如果希望通过一个函数来对链表进行处理，我们至少需要接受链表的哪些参数 2012.3.22
***************************************************************************************************************************

离散存储[链表]
		1.定义：
				头结点数据类型和首节点数据类型一样。
				
				n个节点离散分配
				彼此通过指针相连
				每个节点只有一个前驱节点和后续节点
				首节点没有前驱节点，尾节点没有后续节点
				
				首节点：第一个有效节点（注意区别于头结点）。
				尾节点：最后一个有效节点。
				头结点：第一个有效节点之前那个节点，为了方便对链表的操作而指向链表首节点的指针。只是为了方便操作，无其它意义，并不包含链表有效节点个数等信息。
				头指针：指向头结点的指针变量（注意区别首指针）
				尾指针：指向尾节点的指针变量
				
				
					
		2.如果希望通过一个函数来对链表进行处理，我们至少需要接受链表的哪些参数？
				只需一个头指针。（通过头指针可以推算出链表的其他信息）
