void fun()
{
  int entity_3 = 14;
  int entity_2 = 73;
  entity_3 = 14;
  char entity_0[entity_3] = "";
  entity_0 = NULL;
  char* entity_5;
  memset(entity_0, 'Y', entity_3-1);
  entity_0[entity_3-1]='';
  entity_5 = (char*)malloc(7*sizeof(char));
  entity_5[7-1]='';
  strcpy(entity_5, entity_0);
}