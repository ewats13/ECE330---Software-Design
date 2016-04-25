# Base class

class Shape

	def initialize (aColor, aBorder) 
		@color = aColor
		@border = aBorder
	end

	def draw
		puts "No information to draw myself."
	end

	def getColor
		@color
	end

	def getBorder
		@border
	end


end
