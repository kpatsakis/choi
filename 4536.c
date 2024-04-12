void fun()
{
  int entity_9 = 61;
  entity_9 = 61;
  char entity_5 = 'U';
  char entity_0[entity_9] = "";
  entity_0 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(45*sizeof(char));
  entity_1[45-1]='';
  memset(entity_0, 's', entity_9-1);
  entity_0[entity_9-1]='';
  strcpy(entity_1, entity_0);
}