void fun()
{
  char* entity_8;
  char entity_0[3] = "";
  entity_0 = NULL;
  memset(entity_0, 'H', 3-1);
  entity_0[3-1]='';
  entity_8 = (char*)malloc(7*sizeof(char));
  entity_8[7-1]='';
  strcpy(entity_8, entity_0);
}