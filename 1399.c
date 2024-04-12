void fun()
{
  char* entity_5;
  char entity_0[18] = "";
  entity_0 = NULL;
  entity_5 = (char*)malloc(5*sizeof(char));
  entity_5[5-1]='';
  memset(entity_0, 'b', 18-1);
  entity_0[18-1]='';
  strcpy(entity_5, entity_0);
}