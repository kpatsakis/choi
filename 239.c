void fun()
{
  int entity_9 = 97;
  char entity_5[entity_9] = "";
  entity_5 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(12*sizeof(char));
  entity_4[12-1]='';
  memset(entity_5, 'Q', entity_9-1);
  entity_5[entity_9-1]='';
  entity_9 = 63;
  strcpy(entity_4, entity_5);
}