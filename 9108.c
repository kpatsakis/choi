void fun()
{
  int entity_8 = 11;
  char entity_1[83] = "";
  entity_1 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(entity_8*sizeof(char));
  entity_9[entity_8-1]='';
  memset(entity_1, 'm', 83-1);
  entity_1[83-1]='';
  memcpy(entity_9, entity_1, 83*sizeof(char));
}