void fun()
{
  int entity_9 = 1;
  char* entity_4;
  char entity_5[entity_9] = "";
  entity_5 = NULL;
  memset(entity_5, 'M', entity_9-1);
  entity_5[entity_9-1]='';
  entity_4 = (char*)malloc(3*sizeof(char));
  entity_4[3-1]='';
  entity_9 = 47;
  strcpy(entity_4, entity_5);
}