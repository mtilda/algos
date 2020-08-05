# ITERATIVE SOLUTION
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

p pyramid_sum([ 1, 4, 6, 4, 1 ])





# RECURSIVE SOLUTION
def pyramid_sum_recursive(base)

    # WHILE this base is longer than one
    if base.length > 1

        # RETURN the sums of adjacent numbers in an array
        def sum_array_recursive array
            
            # CALCULATE the sum of the first two numbers
            sum = array[0] + array[1]

            # if the array has more than two numbers
            if array.length > 2

                # PASS the sub array of array after the first number
                # EXTRACT the elements of the result
                # CONCATINATE the sum and the extracted result
                # RETURN the concatinated array
                return [ sum, *sum_array_recursive( array[1..array.length-1] ) ]
            else
                # these are the last two numbers
                # RETURN the sum in its own array
                return [ sum ]
            end
        end

        # CALCULATE the next level of the pyramid
        # PASS the new level to this function
        # CONCATINATE the result with base in an array
        # RETURN that array
        return [ *pyramid_sum_recursive(sum_array_recursive base), base ]
    else
        # this is the tip of the pyramid
        # RETURN base in an array of its own
        return [ base ]
    end
end

# p pyramid_sum_recursive([ 1, 4, 6, 4, 1 ])