
std::size_t hash_value(uint256 const& u)
{
	std::size_t seed = HashMaps::getInstance ().getNonce <size_t> ();

	return u.hash_combine (seed);
}

std::size_t hash_value(const uint160& u)
{
	std::size_t seed = HashMaps::getInstance ().getNonce <size_t> ();

	return u.hash_combine(seed);
}

