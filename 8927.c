void fun()
{
  char* entity_5;
  char entity_0[51] = "";
  entity_0 = NULL;
  char entity_2[55] = "";
  entity_2 = NULL;
  entity_5 = (char*)malloc(30*sizeof(char));
  entity_5[30-1]='';
  memset(entity_0, 'Y', 51-1);
  entity_0[51-1]='';
  memset(entity_2, 'X', 55-1);
  entity_2[55-1]='';
  strcpy(entity_5, entity_0);
}