# StickBadmintonRE


## Risketos Básicos:

- [X] Personaje que puede raquetear de varias formas, bolea, rápida, dejada... 
- [X] IA enemiga a diferentes niveles.
- [X] Customización del personaje (ropa, peinado y cosas así)

## Risketos Opcionales:

- [X] Compatibilidad con mando (XBOX)
- [X] Golpear a enemigos (Se quedan stuneados durante 1 segundo)
- [X] Guardar configuración

## Controles

### TECLADO
- Up / Down / Left / Right Arrows -> Movimiento
- Space -> Saltar
- Right ctrl -> DirectShot
- Up + Left ctrl -> ReverseShot
- Right Shift -> DriveShot
- Up / Down + Right Shift -> Drive shot up / down direction
- Right Alt -> Dash (Solo en el modo de juego Goodminton, require una barra de energia)

### MANDO
- Left gamepad Thumbstick -> Movimiento
- A button -> Saltar
- X button -> DirectShot
- X button + Left gamepad Thumbstick Y Axis -> Reverse Shot 
- Y button -> Drive Shot
- Y button + Left gamepad Thumbstick Y Axis -> Drive shot up / down direction
- B button -> Dash

#MULTIPLAYER (Listen-Server)

##Cosas a cambiar

###Server
- Movimiento pluma -> Multicast RPC para los clientes (reliable)
- Golpear pluma con raqueta (Funciona a base de aplicar daño) -> RPC
- Spawn de los jugadores -> Server side Replication

###?
- Movimiento jugadores -> Replication