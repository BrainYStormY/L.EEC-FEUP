/*****************************************************************/
/*                       Queue | EDA | LEEC                      */
/*****************************************************************/

#include <iostream>
#include <string>
#include <cmath>
#include <queue>

using namespace std;

/** 
 *  @brief  Find the position of the largest element in a queue.
 *  @param  queue_var Queue of char elements to be searched.
 *  @return Position of the largest element in the queue or 0 if the queue is empty.
 *  @note   The position of an element corresponds to its order, which means that the head element of the queue is at position 1.
 *  @note   If there are two or more elements with the same value (corresponding to the largest value), the position to be returned is the one of the first element that would leave the queue.
 */
int posLargestElement(queue<char> queue_var)
{ 
	if(queue_var.empty()) return 0;

	int maxpos = 1, pos = 1;
	char max = queue_var.front();
	queue_var.pop();

	while(!queue_var.empty()){
		pos++;

		if(queue_var.front() > max){
			max = queue_var.front();
			maxpos = pos;
		}

		queue_var.pop();
	}

	return maxpos;
}

/** 
 *  @brief  Insert a new element in a specified position of a queue.
 *  @param  queue_ptr Pointer to the queue of char elements.
 *  @param  elem New element to be inserted in the queue.
 *  @param  pos Position where the new element will be inserted.
 *  @return 0 if successful | -1 if an error occurs
 *  @note   The position of an element corresponds to its order, which means that the head element of the queue is at position 1.
 */
int insertInPosition(queue<char>* queue_ptr, char elem, unsigned int pos)
{ 
	if(queue_ptr == nullptr || pos == 0 || pos > queue_ptr->size() + 1) return -1;

	auto size = queue_ptr->size(); 

	for(size_t i = 1; i <= size; i++){
		if(i == pos) queue_ptr->push(elem);

		queue_ptr->push(queue_ptr->front());
		queue_ptr->pop();

		if(i == size && pos == size + 1) queue_ptr->push(elem);
	}

	return 0;	
}