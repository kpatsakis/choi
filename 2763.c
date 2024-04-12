void fun()
{
  char entity_0[15] = "";
  entity_0 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(59*sizeof(char));
  entity_2[59-1]='';
  memset(entity_0, 'q', 15-1);
  entity_0[15-1]='';
  strcpy(entity_2, entity_0);
}