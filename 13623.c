void fun()
{
  int entity_9 = 84;
  char* entity_8;
  char entity_0[entity_9] = "";
  char entity_4[30] = "";
  entity_8 = (char*)malloc(97*sizeof(char));
  entity_8[0]='0';
  memset(entity_4, 'B', 30-1);
  entity_4[30-1]='0';
  memset(entity_0, 'W', entity_9-1);
  entity_0[entity_9-1]='0';
  entity_9 = 58;
  memcpy(entity_8, entity_0, entity_9*sizeof(char));
}