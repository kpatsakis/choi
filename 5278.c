void fun()
{
  int entity_1 = 73;
  entity_1 = 67;
  char* entity_0;
  char entity_3[19] = "";
  entity_3 = NULL;
  char entity_4[99] = "";
  entity_4 = NULL;
  memset(entity_3, 'R', 19-1);
  entity_3[19-1]='';
  memset(entity_4, 'G', 99-1);
  entity_4[99-1]='';
  entity_0 = (char*)malloc(entity_1*sizeof(char));
  entity_0[entity_1-1]='';
  strcpy(entity_0, entity_3);
}