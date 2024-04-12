void fun()
{
  int entity_6 = 92;
  entity_6 = 92;
  char entity_9[entity_6] = "";
  entity_9 = NULL;
  char* entity_8;
  memset(entity_9, 'C', entity_6-1);
  entity_9[entity_6-1]='';
  entity_8 = (char*)malloc(20*sizeof(char));
  entity_8[20-1]='';
  strcpy(entity_8, entity_9);
}