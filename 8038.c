void fun()
{
  int entity_4 = 78;
  char* entity_6;
  char entity_9[entity_4] = "";
  entity_9 = NULL;
  memset(entity_9, 'j', entity_4-1);
  entity_9[entity_4-1]='';
  entity_6 = (char*)malloc(54*sizeof(char));
  entity_6[54-1]='';
  entity_4 = 6;
  strcpy(entity_6, entity_9);
}