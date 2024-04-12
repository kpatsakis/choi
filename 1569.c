void fun()
{
  int entity_9 = 65;
  char* entity_3;
  char entity_0[entity_9] = "";
  entity_0 = NULL;
  char entity_6[86] = "";
  entity_6 = NULL;
  char* entity_2;
  memset(entity_6, 'd', 86-1);
  entity_6[86-1]='';
  entity_2 = (char*)malloc(81*sizeof(char));
  entity_2[81-1]='';
  entity_3 = (char*)malloc(65*sizeof(char));
  entity_3[65-1]='';
  memset(entity_0, 'n', entity_9-1);
  entity_0[entity_9-1]='';
  strcpy(entity_2, entity_0);
}