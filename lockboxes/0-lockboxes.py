#!/usr/bin/python3
""" Lockboxes """


def canUnlockAll(boxes):
    """
      Function to determine if all boxes can be unlocked.
      :param boxes: List of lists, where each sub-list contains keys
                    to other boxes.
      :return: True if all boxes can be unlocked, False otherwise.
    """
    boxes_unlocked = set([0])
    boxes_queue = [0]

    while boxes_queue:
        current_boxes = boxes_queue.pop(0)

        for key in boxes[current_boxes]:
            if key not in boxes_unlocked and key < len(boxes):
                boxes_unlocked.add(key)
                boxes_queue.append(key)

    return len(boxes_unlocked) == len(boxes)
