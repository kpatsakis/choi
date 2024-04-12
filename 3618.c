void fun()
{
  int entity_8 = 85;
  entity_8 = 64;
  char* entity_9;
  char entity_4[64] = "";
  entity_4 = NULL;
  entity_9 = (char*)malloc(entity_8*sizeof(char));
  entity_9[entity_8-1]='';
  memset(entity_4, 'P', 64-1);
  entity_4[64-1]='';
  strcpy(entity_9, entity_4);
}