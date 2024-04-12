void fun()
{
  char entity_0[38] = "";
  entity_0 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(23*sizeof(char));
  entity_4[23-1]='';
  memset(entity_0, 'y', 38-1);
  entity_0[38-1]='';
  strcpy(entity_4, entity_0);
}