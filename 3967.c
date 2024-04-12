void fun()
{
  char* entity_0;
  char entity_5[18] = "";
  entity_5 = NULL;
  memset(entity_5, 'x', 18-1);
  entity_5[18-1]='';
  entity_0 = (char*)malloc(99*sizeof(char));
  entity_0[99-1]='';
  strcpy(entity_0, entity_5);
}