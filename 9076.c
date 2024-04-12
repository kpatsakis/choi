void fun()
{
  int entity_4 = 18;
  char entity_8 = 'e';
  char* entity_9;
  char entity_5[32] = "";
  entity_5 = NULL;
  memset(entity_5, 'k', 32-1);
  entity_5[32-1]='';
  entity_9 = (char*)malloc(entity_4*sizeof(char));
  entity_9[entity_4-1]='';
  memcpy(entity_9, entity_5, 32*sizeof(char));
}