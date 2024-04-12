void fun()
{
  int entity_2 = 62;
  entity_2 = 62;
  char* entity_9;
  char entity_5[entity_2] = "";
  entity_5 = NULL;
  entity_9 = (char*)malloc(48*sizeof(char));
  entity_9[48-1]='';
  memset(entity_5, 'T', entity_2-1);
  entity_5[entity_2-1]='';
  strcpy(entity_9, entity_5);
}