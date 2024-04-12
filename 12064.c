void fun()
{
  int entity_8 = 12;
  char* entity_9;
  char entity_4[75] = "";
  char entity_0[entity_8] = "";
  memset(entity_0, 'z', entity_8-1);
  entity_0[entity_8-1]='0';
  entity_9 = (char*)malloc(4*sizeof(char));
  entity_9[0]='0';
  memset(entity_4, 'G', 75-1);
  entity_4[75-1]='0';
  memcpy(entity_9, entity_0, entity_8*sizeof(char));
}