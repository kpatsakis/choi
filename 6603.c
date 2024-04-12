void fun()
{
  char* entity_5;
  char entity_0[67] = "";
  entity_0 = NULL;
  entity_5 = (char*)malloc(32*sizeof(char));
  entity_5[32-1]='';
  memset(entity_0, 'J', 67-1);
  entity_0[67-1]='';
  strcpy(entity_5, entity_0);
}