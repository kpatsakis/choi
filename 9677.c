void fun()
{
  char entity_9[89] = "";
  entity_9 = NULL;
  char entity_5[48] = "";
  entity_5 = NULL;
  char* entity_0;
  memset(entity_5, 'j', 48-1);
  entity_5[48-1]='';
  entity_0 = (char*)malloc(66*sizeof(char));
  entity_0[66-1]='';
  memset(entity_9, 'L', 89-1);
  entity_9[89-1]='';
  strcpy(entity_0, entity_9);
}