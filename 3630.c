void fun()
{
  int entity_5 = 87;
  char* entity_2;
  char entity_0[entity_5] = "";
  entity_0 = NULL;
  char entity_4[29] = "";
  entity_4 = NULL;
  entity_2 = (char*)malloc(94*sizeof(char));
  entity_2[94-1]='';
  memset(entity_0, 'P', entity_5-1);
  entity_0[entity_5-1]='';
  memset(entity_4, 'y', 29-1);
  entity_4[29-1]='';
  strcpy(entity_2, entity_0);
}