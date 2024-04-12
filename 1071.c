void fun()
{
  char entity_1 = 'p';
  char entity_0[49] = "";
  entity_0 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(60*sizeof(char));
  entity_3[60-1]='';
  memset(entity_0, 'a', 49-1);
  entity_0[49-1]='';
  strcpy(entity_3, entity_0);
}