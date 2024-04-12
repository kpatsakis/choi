void fun()
{
  int entity_7 = 17;
  char entity_0[38] = "";
  entity_0 = NULL;
  char entity_5[entity_7] = "";
  entity_5 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(98*sizeof(char));
  entity_9[98-1]='';
  memset(entity_0, 'M', 38-1);
  entity_0[38-1]='';
  memset(entity_5, 'v', entity_7-1);
  entity_5[entity_7-1]='';
  strcpy(entity_9, entity_5);
}