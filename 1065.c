void fun()
{
  char* entity_0;
  char entity_6[67] = "";
  entity_6 = NULL;
  entity_0 = (char*)malloc(39*sizeof(char));
  entity_0[39-1]='';
  memset(entity_6, 'O', 67-1);
  entity_6[67-1]='';
  strcpy(entity_0, entity_6);
}