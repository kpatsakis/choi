void fun()
{
  char entity_0[51] = "";
  entity_0 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(87*sizeof(char));
  entity_1[87-1]='';
  memset(entity_0, 'x', 51-1);
  entity_0[51-1]='';
  strcpy(entity_1, entity_0);
}