void fun()
{
  int entity_0 = 47;
  entity_0 = 47;
  char entity_9[entity_0] = "";
  entity_9 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(90*sizeof(char));
  entity_5[90-1]='';
  memset(entity_9, 'j', entity_0-1);
  entity_9[entity_0-1]='';
  strcpy(entity_5, entity_9);
}