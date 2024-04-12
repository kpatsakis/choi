void fun()
{
  char* entity_9;
  char entity_1[72] = "";
  entity_1 = NULL;
  entity_9 = (char*)malloc(9*sizeof(char));
  entity_9[9-1]='';
  memset(entity_1, 'O', 72-1);
  entity_1[72-1]='';
  strcpy(entity_9, entity_1);
}