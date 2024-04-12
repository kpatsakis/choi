void fun()
{
  char* entity_0;
  char entity_5[50] = "";
  entity_5 = NULL;
  char entity_3[73] = "";
  entity_3 = NULL;
  entity_0 = (char*)malloc(34*sizeof(char));
  entity_0[34-1]='';
  memset(entity_5, 't', 50-1);
  entity_5[50-1]='';
  memset(entity_3, 'k', 73-1);
  entity_3[73-1]='';
  entity_5[97] = 'R';
}