void fun()
{
  int entity_1 = 38;
  char* entity_8;
  char* entity_7;
  char entity_0[2] = "";
  memset(entity_0, 'p', 2-1);
  entity_0[2-1]='0';
  entity_8 = (char*)malloc(52*sizeof(char));
  entity_8[0]='0';
  entity_7 = (char*)malloc(entity_1*sizeof(char));
  entity_7[0]='0';
  memcpy(entity_7, entity_0, 2*sizeof(char));
}