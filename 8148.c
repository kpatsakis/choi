void fun()
{
  int entity_7 = 38;
  entity_7 = 51;
  char* entity_5;
  char entity_9[entity_7] = "";
  entity_9 = NULL;
  entity_5 = (char*)malloc(47*sizeof(char));
  entity_5[47-1]='';
  memset(entity_9, 'O', entity_7-1);
  entity_9[entity_7-1]='';
  memcpy(entity_5, entity_9, entity_7*sizeof(char));
}