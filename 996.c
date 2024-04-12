void fun()
{
  int entity_2 = 20;
  char entity_0[entity_2] = "";
  entity_0 = NULL;
  char entity_6[65] = "";
  entity_6 = NULL;
  char* entity_3;
  memset(entity_0, 'z', entity_2-1);
  entity_0[entity_2-1]='';
  entity_3 = (char*)malloc(58*sizeof(char));
  entity_3[58-1]='';
  memset(entity_6, 'l', 65-1);
  entity_6[65-1]='';
  strcpy(entity_3, entity_0);
}