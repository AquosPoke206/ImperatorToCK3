#ifndef TAG_TITLE_MAPPER_H
#define TAG_TITLE_MAPPER_H

#include "Parser.h"

namespace Imperator {
	class Country;
	enum class countryRankEnum;
}

namespace mappers
{
class TagTitleMapper
{
  public:
	[[nodiscard]] std::optional<std::string> getTitleForTag(const std::string& impTag, Imperator::countryRankEnum countryRank, const std::string& localizedTitleName) const;
	[[nodiscard]] std::optional<std::string> getTitleForTag(const std::string& impTag, const Imperator::countryRankEnum countryRank) const {
		return getTitleForTag(impTag, countryRank, "");
	}

  private:
	[[nodiscard]] std::string generateNewTitle(const std::string& impTag, Imperator::countryRankEnum countryRank, const std::string& localizedTitleName) const;

	std::string generatedCK3TitlePrefix = "IMPTOCK3_";
};
} // namespace mappers

#endif // TAG_TITLE_MAPPER_H