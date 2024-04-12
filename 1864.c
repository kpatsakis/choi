void fun()
{
  char entity_0[65] = "";
  entity_0 = NULL;
  char* entity_6;
  char entity_2[81] = "";
  entity_2 = NULL;
  memset(entity_0, 'C', 65-1);
  entity_0[65-1]='';
  memset(entity_2, 'b', 81-1);
  entity_2[81-1]='';
  entity_6 = (char*)malloc(7*sizeof(char));
  entity_6[7-1]='';
  strcpy(entity_6, entity_2);
}