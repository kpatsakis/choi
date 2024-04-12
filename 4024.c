void fun()
{
  int entity_5 = 82;
  entity_5 = 82;
  char entity_1[entity_5] = "";
  entity_1 = NULL;
  char* entity_9;
  memset(entity_1, 'b', entity_5-1);
  entity_1[entity_5-1]='';
  entity_9 = (char*)malloc(47*sizeof(char));
  entity_9[47-1]='';
  strcpy(entity_9, entity_1);
}