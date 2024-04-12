void fun()
{
  char* entity_0;
  char entity_5[40] = "";
  entity_5 = NULL;
  memset(entity_5, 't', 40-1);
  entity_5[40-1]='';
  entity_0 = (char*)malloc(75*sizeof(char));
  entity_0[75-1]='';
  strcpy(entity_0, entity_5);
}