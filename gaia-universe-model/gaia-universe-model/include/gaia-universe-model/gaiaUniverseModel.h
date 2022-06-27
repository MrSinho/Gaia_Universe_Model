#ifdef __cplusplus
extern "C" {
#endif//__cplusplus

#ifndef GAIA_UNIVERSE_MODEL_H
#define GAIA_UNIVERSE_MODEL_H



#include <gaia-archive-tools/gaiaArchiveTools.h>

#include <shvulkan/shVkPipelineData.h>

typedef struct GaiaUniverseModelMemory {
	uint32_t			used_gpu_heap;
	void*				p_celestial_bodies;
	uint32_t			celestial_body_size;
	uint32_t			max_buffer_memory;
	uint32_t			available_video_memory;
	ShVkPipeline*		p_pipeline;
	ShVkFixedStates*	p_fixed_states;
} GaiaUniverseModelMemory;



uint8_t gaiaReadSources(ShEngine* p_engine, const GaiaCelestialBodyFlags celestial_body_flags, GaiaUniverseModelMemory* p_model);

uint8_t gaiaBuildPipeline(ShEngine* p_engine, GaiaUniverseModelMemory* p_model);

uint8_t gaiaWriteMemory(ShEngine* p_engine, GaiaUniverseModelMemory* p_model);

uint8_t gaiaMemoryRelease(ShEngine* p_engine, GaiaUniverseModelMemory* p_model);


#endif//GAIA_UNIVERSE_MODEL_H

#ifdef __cplusplus
}
#endif//__cplusplus