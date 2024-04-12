void fun()
{
  int entity_3 = 53;
  int entity_2 = 63;
  char entity_9 = 'v';
  char entity_8[0] = "";
  char entity_4[entity_3] = "";
  char* entity_7;
  memset(entity_4, 'M', entity_3-1);
  entity_4[entity_3-1]='0';
  entity_7 = (char*)malloc(70*sizeof(char));
  entity_7[0]='0';
  memset(entity_8, 'l', 0-1);
  entity_8[0-1]='0';
  entity_3 = 92;
  memcpy(entity_7, entity_4, entity_3*sizeof(char));
}