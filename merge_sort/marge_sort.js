const bubbleSort = (list) => {
  // Repeat until list is sorted
  for (let isSorted = false, i = 1; !isSorted; i++) {
    // Assume list is sorted
    isSorted = true;

    // For each element except the last in unsorted portion of list
    for (let j = 0; j < list.length - i; j++) {
      // If this element and the next element are out of order,
      if (list[j] > list[j + 1]) {
        // Swap elements (ES6 destructuring)
        [list[j], list[j + 1]] = [list[j + 1], list[j]];

        // Correct earlier assumption (list is not sorted)
        isSorted = false;
      }
    }
  }
  return list;
};

const numbers = [23, 15, 4, 42, 16, 8];
const names = ['charlie', 'edna', 'albert', 'freyja', 'blaise', 'dahlia'];

console.log(bubbleSort(numbers));
console.log(bubbleSort(names));
