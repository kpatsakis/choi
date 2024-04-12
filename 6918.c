void fun()
{
  int entity_8 = 91;
  entity_8 = 91;
  char entity_9[entity_8] = "";
  entity_9 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(99*sizeof(char));
  entity_1[99-1]='';
  memset(entity_9, 'Q', entity_8-1);
  entity_9[entity_8-1]='';
  strcpy(entity_1, entity_9);
}