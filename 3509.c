void fun()
{
  int entity_6 = 18;
  entity_6 = 76;
  char entity_3[12] = "";
  entity_3 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(entity_6*sizeof(char));
  entity_0[entity_6-1]='';
  memset(entity_3, 'K', 12-1);
  entity_3[12-1]='';
  strcpy(entity_0, entity_3);
}