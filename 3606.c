void fun()
{
  int entity_4 = 11;
  char* entity_1;
  char entity_9[98] = "";
  entity_9 = NULL;
  memset(entity_9, 'I', 98-1);
  entity_9[98-1]='';
  entity_1 = (char*)malloc(91*sizeof(char));
  entity_1[91-1]='';
  strcpy(entity_1, entity_9);
}