# barkvr-ext

This is the monolithic gdextension for barkvr so that extensions can talk to eachother using C++ directly instead of through GDScript.
Implementing everything directly in C++ should dramatically improve performance and stability of these core functions.

## TODO

### BarkHelpers:

methods:

- node_to_var(node:Node, type:String="", cust_name:String="") -> Dictionary
- var_to_node(item:String="", dict:Dictionary={}) -> Node
- normalize_float32_array(array:PackedFloat32Array) -> PackedFloat32Array
- normalize_float64_array(array:PackedFloat64Array) -> PackedFloat64Array
- float64_array_magnitude(array:PackedFloat64Array) -> float
- float32_array_magnitude(array:PackedFloat32Array) -> float
- rejoin_thread_when_finished(thread: Thread) -> void 
- check_root()
  - validate the shared root exists


### Journaling

will be updated later for proper journal tracking and branch history

variables:
var actions: Array[Dictionary] = []

methods:

- _ready()
  - reference LocalGlobals for remote world root node
- get_actions()
  - returns current set of queued actions
- set_parent(target: NodePath, new_parent: NodePath) -> void
- delete_node(target: NodePath, recieved := false) -> void
- set_property(target: NodePath, prop_name: String, value: Variant, recieved := false) -> void
- net_propagate_node(node_string: String, parent := ^'', node_name := '', recieved := false) -> void
- import_asset( type: String, asset_to_import: Variant, asset_name := '', recieved := false, data := {} ) -> void
- _check_loaded(path: String) -> void
- _import_glb(content: PackedByteArray, asset_name := '', data := {}) -> void
- _import_res(asset_name: String, asset_to_import: Variant) -> void
- _import_image(asset_name: String, content: PackedByteArray) -> void
- receive(action: Dictionary) -> void


### LocalGlobals

keeps track of local variables for easy reference and some startup tasks

variables:
var editor_refs : Dictionary = {}
var interface : XRInterface
var webxr_interface
var vr_supported = true
var local_uis:Array = []
var keyboard:StaticBody3D
var discord_world = 'loading'
var discord_login_status = 'not logged in'

@export_enum("PAUSED", "PLAYING", "TYPING") var player_state : int = 0
static var PLAYER_STATE_PAUSED := 0
static var PLAYER_STATE_PLAYING:= 1
static var PLAYER_STATE_TYPING := 2

@export_enum("EDITING", "PLAYING", "VIEWING") var world_state : int = 0
static var WORLD_STATE_EDITING := 0
static var WORLD_STATE_PLAYING := 1
static var WORLD_STATE_VIEWING := 2

signal playerinit(isvr: bool)
signal playerreleaseuifocus
signal clear_gizmos

methods:

- _ready()
  - assign vr_supported based on ProjectSettings.get_setting('xr/openxr/enabled', false)
- _input():
  - check for ui_cancel action and if it's pressed, emit the playerreleaseuifocus signal