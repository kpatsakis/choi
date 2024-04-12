void fun()
{
  int entity_3 = 38;
  int entity_6 = 31;
  char* entity_9;
  char entity_8[entity_3] = "";
  memset(entity_8, 'O', entity_3-1);
  entity_8[entity_3-1]='0';
  entity_9 = (char*)malloc(100*sizeof(char));
  entity_9[0]='0';
  memcpy(entity_9, entity_8, entity_3*sizeof(char));
}