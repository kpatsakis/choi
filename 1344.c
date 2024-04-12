void fun()
{
  char entity_4[50] = "";
  entity_4 = NULL;
  char* entity_0;
  memset(entity_4, 'H', 50-1);
  entity_4[50-1]='';
  entity_0 = (char*)malloc(85*sizeof(char));
  entity_0[85-1]='';
  strcpy(entity_0, entity_4);
}