void fun()
{
  char entity_0[73] = "";
  entity_0 = NULL;
  char entity_1[73] = "";
  entity_1 = NULL;
  char* entity_2;
  memset(entity_0, 'L', 73-1);
  entity_0[73-1]='';
  entity_2 = (char*)malloc(87*sizeof(char));
  entity_2[87-1]='';
  memset(entity_1, 's', 73-1);
  entity_1[73-1]='';
  strcpy(entity_2, entity_0);
}