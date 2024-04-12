void fun()
{
  int entity_6 = 53;
  char* entity_9;
  char entity_0[1] = "";
  entity_0 = NULL;
  char entity_3[entity_6] = "";
  entity_3 = NULL;
  memset(entity_3, 'M', entity_6-1);
  entity_3[entity_6-1]='';
  entity_9 = (char*)malloc(65*sizeof(char));
  entity_9[65-1]='';
  memset(entity_0, 'q', 1-1);
  entity_0[1-1]='';
  strcpy(entity_9, entity_3);
}