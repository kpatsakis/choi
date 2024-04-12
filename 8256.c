void fun()
{
  int entity_5 = 94;
  entity_5 = 94;
  char entity_0[72] = "";
  entity_0 = NULL;
  char entity_2[entity_5] = "";
  entity_2 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(29*sizeof(char));
  entity_1[29-1]='';
  memset(entity_0, 'u', 72-1);
  entity_0[72-1]='';
  memset(entity_2, 'T', entity_5-1);
  entity_2[entity_5-1]='';
  strcpy(entity_1, entity_2);
}