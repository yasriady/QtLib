#ifndef WAVFILE_H
#define WAVFILE_H

#include <QString>

// reading wav header require theses headers
#include <iostream>
#include <fstream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <stdint.h>
#include <cmath>

#define SWAPPED_US(x) (((x) >> 8) | ((x) << 8))
#define SWAPPED_UL(x) ((((x) >> 24) & 0xff) | (((x) << 8) & 0xff0000) | (((x) >> 8) & 0xff00) | (((x) << 24) & 0xff000000))
#pragma pack(push, 1)

typedef struct {
    char ID [4];
    uint32_t Size;
    char Format [4];
    char SubID_1 [4];
    uint32_t SubSize_1;
    uint16_t AudioFmt;
    uint16_t Channel;
    uint32_t Frequency;
    uint32_t bytesRate;
    uint16_t BlockAlign;
    uint16_t BitsPerSample;
    char SubID_2 [4];
    uint32_t SubSize_2;
} RIFF_header;
#pragma pack(pop)

class WavFile
{
public:
    WavFile(char *fileName);
    ~WavFile();

    unsigned int getSampleRate() const;
    unsigned int getByteRate() const;
    int getChannels() const;
    int getFormat() const;
    int getFileSize() const;
    char *getFileName() const;

private:
    char* m_fileName;
    int m_fileSize;

    unsigned int m_sampleRate, m_byteRate;
    int m_channels, m_format;
    int getFileSize_(FILE *inFile);

};

#endif // WAVFILE_H
