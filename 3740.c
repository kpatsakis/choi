void fun()
{
  char* entity_0;
  char entity_4[14] = "";
  entity_4 = NULL;
  entity_0 = (char*)malloc(53*sizeof(char));
  entity_0[53-1]='';
  memset(entity_4, 'A', 14-1);
  entity_4[14-1]='';
  strcpy(entity_0, entity_4);
}