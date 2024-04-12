void fun()
{
  char* entity_9;
  char entity_1[22] = "";
  entity_1 = NULL;
  char entity_3 = 'U';
  memset(entity_1, 'c', 22-1);
  entity_1[22-1]='';
  entity_9 = (char*)malloc(66*sizeof(char));
  entity_9[66-1]='';
  strcpy(entity_9, entity_1);
}