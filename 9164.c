void fun()
{
  int entity_9 = 94;
  entity_9 = 94;
  char entity_5[entity_9] = "";
  entity_5 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(96*sizeof(char));
  entity_2[96-1]='';
  memset(entity_5, 'w', entity_9-1);
  entity_5[entity_9-1]='';
  strcpy(entity_2, entity_5);
}