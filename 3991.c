void fun()
{
  int entity_9 = 67;
  char* entity_5;
  char entity_6[entity_9] = "";
  entity_6 = NULL;
  entity_5 = (char*)malloc(42*sizeof(char));
  entity_5[42-1]='';
  memset(entity_6, 'j', entity_9-1);
  entity_6[entity_9-1]='';
  strcpy(entity_5, entity_6);
}