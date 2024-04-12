void fun()
{
  char entity_1[40] = "";
  entity_1 = NULL;
  char entity_2[83] = "";
  entity_2 = NULL;
  char* entity_0;
  memset(entity_2, 'H', 83-1);
  entity_2[83-1]='';
  memset(entity_1, 'K', 40-1);
  entity_1[40-1]='';
  entity_0 = (char*)malloc(74*sizeof(char));
  entity_0[74-1]='';
  strcpy(entity_0, entity_1);
}