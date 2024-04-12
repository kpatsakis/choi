void fun()
{
  char entity_0[56] = "";
  entity_0 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(3*sizeof(char));
  entity_5[3-1]='';
  memset(entity_0, 'l', 56-1);
  entity_0[56-1]='';
  strcpy(entity_5, entity_0);
}