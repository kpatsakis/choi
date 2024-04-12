void fun()
{
  int entity_8 = 32;
  int entity_5 = 88;
  entity_8 = 93;
  char entity_9[71] = "";
  entity_9 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(entity_8*sizeof(char));
  entity_4[entity_8-1]='';
  memset(entity_9, 'r', 71-1);
  entity_9[71-1]='';
  strcpy(entity_4, entity_9);
}