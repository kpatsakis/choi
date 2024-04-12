void fun()
{
  int entity_5 = 61;
  int entity_3 = 53;
  char* entity_4;
  char entity_7 = 'j';
  char entity_0[25] = "";
  entity_0 = NULL;
  memset(entity_0, 'k', 25-1);
  entity_0[25-1]='';
  entity_4 = (char*)malloc(entity_5*sizeof(char));
  entity_4[entity_5-1]='';
  strcpy(entity_4, entity_0);
}