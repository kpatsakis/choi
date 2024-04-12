void fun()
{
  int entity_7 = 47;
  int entity_2 = 78;
  int entity_4 = 47;
  char* entity_8;
  char entity_9[entity_7] = "";
  memset(entity_9, 'b', entity_7-1);
  entity_9[entity_7-1]='0';
  entity_8 = (char*)malloc(67*sizeof(char));
  entity_8[0]='0';
  entity_7 = 53;
  memcpy(entity_8, entity_9, entity_7*sizeof(char));
}