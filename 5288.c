void fun()
{
  int entity_8 = 68;
  entity_8 = 16;
  char* entity_7;
  char entity_9[54] = "";
  entity_9 = NULL;
  entity_7 = (char*)malloc(entity_8*sizeof(char));
  entity_7[entity_8-1]='';
  memset(entity_9, 'H', 54-1);
  entity_9[54-1]='';
  memcpy(entity_7, entity_9, 54*sizeof(char));
}