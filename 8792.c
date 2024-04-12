void fun()
{
  char* entity_0;
  char entity_9[9] = "";
  entity_9 = NULL;
  memset(entity_9, 'W', 9-1);
  entity_9[9-1]='';
  entity_0 = (char*)malloc(31*sizeof(char));
  entity_0[31-1]='';
  strcpy(entity_0, entity_9);
}