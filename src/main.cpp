#include "FileReader.h"
#include "TextProcessor.h"
#include "EmailDistributor.h"
#include "DataPipeline.h"
#include <memory>

int main() {
    auto reader = std::make_shared<FileReader>();
    auto processor = std::make_shared<TextProcessor>();
    auto distributor = std::make_shared<EmailDistributor>();

    DataPipeline<std::string> pipeline(reader, processor, distributor);
    pipeline.executePipeline();

    return 0;
}
