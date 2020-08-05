
def pyramid_sum(base)

    # RETURN the sums of adjacent values in an array
    def sum_array array
    
        # DEFINE an array to hold the sums
        sums = []

        # FOR EACH element in base
        0.upto(array.length - 2) do |i|
            # ADD adjacent numbers
            # STORE the sum to a new array
            sums << array[i] + array[i+1]
        end

        return sums
    end

    # STORE base to the pyramid array
    pyramid = [base] #=> [ [ 0, 1, 2, 3, 4, 5 ] ]

    # WHILE the top level (first element) of pyramid is longer than one
    while pyramid.first.length > 1
        # CALCULATE the sum of the top level (first element) of the pyramid
        # STORE the array of sums on top (as the new first element) of pyramid
        pyramid.unshift sum_array pyramid.first
    end

    return pyramid
end

input_array = [ 1, 4, 6, 4, 1 ]

p pyramid_sum(input_array)