void fun()
{
  int entity_1 = 69;
  entity_1 = 18;
  char* entity_3;
  char entity_0[14] = "";
  entity_0 = NULL;
  char entity_5[11] = "";
  entity_5 = NULL;
  memset(entity_5, 'w', 11-1);
  entity_5[11-1]='';
  entity_3 = (char*)malloc(entity_1*sizeof(char));
  entity_3[entity_1-1]='';
  memset(entity_0, 'S', 14-1);
  entity_0[14-1]='';
  strcpy(entity_3, entity_0);
}