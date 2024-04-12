void fun()
{
  char entity_0[12] = "";
  entity_0 = NULL;
  char* entity_2;
  memset(entity_0, 's', 12-1);
  entity_0[12-1]='';
  entity_2 = (char*)malloc(30*sizeof(char));
  entity_2[30-1]='';
  strcpy(entity_2, entity_0);
}