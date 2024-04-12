void fun()
{
  char entity_5[27] = "";
  entity_5 = NULL;
  char* entity_0;
  memset(entity_5, 'W', 27-1);
  entity_5[27-1]='';
  entity_0 = (char*)malloc(50*sizeof(char));
  entity_0[50-1]='';
  strcpy(entity_0, entity_5);
}