void fun()
{
  char* entity_6;
  char entity_0[75] = "";
  entity_0 = NULL;
  char entity_4 = 'h';
  memset(entity_0, 'm', 75-1);
  entity_0[75-1]='';
  entity_6 = (char*)malloc(3*sizeof(char));
  entity_6[3-1]='';
  strcpy(entity_6, entity_0);
}