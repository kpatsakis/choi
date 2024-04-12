void fun()
{
  int entity_7 = 16;
  char* entity_1;
  char entity_0[entity_7] = "";
  entity_0 = NULL;
  char entity_5[99] = "";
  entity_5 = NULL;
  memset(entity_5, 'G', 99-1);
  entity_5[99-1]='';
  entity_1 = (char*)malloc(65*sizeof(char));
  entity_1[65-1]='';
  memset(entity_0, 'h', entity_7-1);
  entity_0[entity_7-1]='';
  strcpy(entity_1, entity_0);
}