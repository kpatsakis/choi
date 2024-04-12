void fun()
{
  int entity_7 = 3;
  char* entity_4;
  char entity_0[entity_7] = "";
  entity_0 = NULL;
  char entity_3[72] = "";
  entity_3 = NULL;
  entity_4 = (char*)malloc(80*sizeof(char));
  entity_4[80-1]='';
  memset(entity_3, 'B', 72-1);
  entity_3[72-1]='';
  memset(entity_0, 'A', entity_7-1);
  entity_0[entity_7-1]='';
  entity_7 = 68;
  strcpy(entity_4, entity_0);
}