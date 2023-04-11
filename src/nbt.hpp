#include <cstdint>
#include <memory>

class NbtTag {
private:
	enum class Type : std::int8_t {
		Unconverted = -1
		End = 0,
		Byte = 1,
		Short = 2,
		Int = 3,
		Long = 4,
		Float = 5,
		Double = 6,
		ByteArray = 7,
		String = 8,
		List = 9,
		Compound = 10,
		IntArray = 11,
		LongArray = 12
	}
	
	std::size_t size;
	Type type;
	std::unique_ptr<std::uint8_t[]> data;
}
