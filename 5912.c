void fun()
{
  int entity_9 = 71;
  char entity_5[entity_9] = "";
  entity_5 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(59*sizeof(char));
  entity_6[59-1]='';
  memset(entity_5, 'V', entity_9-1);
  entity_5[entity_9-1]='';
  strcpy(entity_6, entity_5);
}