void fun()
{
  int entity_8 = 48;
  entity_8 = 48;
  char entity_9[entity_8] = "";
  entity_9 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(99*sizeof(char));
  entity_6[99-1]='';
  memset(entity_9, 'C', entity_8-1);
  entity_9[entity_8-1]='';
  strcpy(entity_6, entity_9);
}