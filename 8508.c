void fun()
{
  char entity_3[57] = "";
  entity_3 = NULL;
  char entity_0[28] = "";
  entity_0 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(58*sizeof(char));
  entity_2[58-1]='';
  memset(entity_0, 'x', 28-1);
  entity_0[28-1]='';
  memset(entity_3, 'E', 57-1);
  entity_3[57-1]='';
  strcpy(entity_2, entity_0);
}