void fun()
{
  char* entity_0;
  char entity_4[36] = "";
  entity_4 = NULL;
  memset(entity_4, 'a', 36-1);
  entity_4[36-1]='';
  entity_0 = (char*)malloc(4*sizeof(char));
  entity_0[4-1]='';
  strcpy(entity_0, entity_4);
}