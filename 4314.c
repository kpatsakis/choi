void fun()
{
  char entity_0[89] = "";
  entity_0 = NULL;
  char* entity_9;
  memset(entity_0, 'q', 89-1);
  entity_0[89-1]='';
  entity_9 = (char*)malloc(19*sizeof(char));
  entity_9[19-1]='';
  strcpy(entity_9, entity_0);
}