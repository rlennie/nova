=====================
Allocation candidates
=====================

.. note:: Allocation candidates API requests are availiable starting from version 1.10.

List allocation candidates
==========================

Returns a dictionary representing a collection of allocation requests
and resource provider summaries. Each allocation request has
information to form a ``PUT /allocations/{consumer_uuid}`` request to claim
resources against a related set of resource providers. Additional parameters
might be required, see `Update allocations`_. As several allocation
requests are available it's necessary to select one. To make a
decision, resource provider summaries are provided with the
inventory/capacity information. For example, this information is used by
nova-scheduler's FilterScheduler to make decisions about on which compute host
to build a server.

.. rest_method:: GET /allocation_candidates

Normal Response Codes: 200

Error response codes: badRequest(400)

Request
-------

.. rest_parameters:: parameters.yaml

  - resources: resources_query_required

Response
--------

.. rest_parameters:: parameters.yaml

  - allocation_requests: allocation_requests
  - provider_summaries: provider_summaries
  - allocations: allocations_array
  - resource_provider: resource_provider_object
  - uuid: resource_provider_uuid
  - resources: resources
  - capacity: capacity
  - used: used

Response Example
----------------

.. literalinclude:: get-allocation_candidates.json
   :language: javascript