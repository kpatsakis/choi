void fun()
{
  char entity_2[72] = "";
  entity_2 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(47*sizeof(char));
  entity_0[47-1]='';
  memset(entity_2, 'U', 72-1);
  entity_2[72-1]='';
  strcpy(entity_0, entity_2);
}