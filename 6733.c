void fun()
{
  int entity_9 = 59;
  char entity_8[entity_9] = "";
  entity_8 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(47*sizeof(char));
  entity_2[47-1]='';
  memset(entity_8, 'X', entity_9-1);
  entity_8[entity_9-1]='';
  entity_9 = 71;
  strcpy(entity_2, entity_8);
}