#pragma once

#include "engine/system/ISystem.h"
#include "engine/resource/ResourceFactory.h"

namespace ds
{
/**
 * The render system is responsible for rendering the world, it contains all
 * render specific data, including the render component data for each entity.
 */
class Render : public ISystem
{
public:
    /**
     * Initialize the render system.
     *
     * Returns FALSE if initialization fails.
     *
     * @param   config  const Config &, configuration loaded by engine.
     * @return          bool, TRUE if initialization succeeds, FALSE otherwise.
     */
    virtual bool Initialize(const Config &config);

    /**
     * Update the render system over the given timestep.
     *
     * @param  deltaTime  float, timestep to update the system over.
     */
    virtual void Update(float deltaTime);

    /**
     * Perform teardown of the render system.
     */
    virtual void Shutdown();

    /**
     * Give messages to the render system.
     *
     * Messages are not handled in this method. Handling of events is deferred
     * to the Update method.
     *
     * @param  messages  const ds_msg::MessageStream &messages, messages to send
     * to the Message Bus.
     */
    virtual void PostMessages(const ds_msg::MessageStream &messages);

    /**
     * Collect messages generated by the render system.
     *
     * @return  ds_msg::MessageStream, stream of messages generated by this
     * system.
     */
    virtual ds_msg::MessageStream CollectMessages();

private:

    /**
     * Process messages in the given message stream.
     *
     * @param  ds_msg::MessageStream *, messages to process.
     */
    void ProcessEvents(ds_msg::MessageStream *messages);

    ds_msg::MessageStream m_messagesGenerated, m_messagesReceived;

    ResourceFactory m_factory;
};
}
