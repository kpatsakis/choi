void fun()
{
  int entity_9 = 24;
  char entity_5[56] = "";
  entity_5 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(entity_9*sizeof(char));
  entity_1[entity_9-1]='';
  memset(entity_5, 'w', 56-1);
  entity_5[56-1]='';
  strcpy(entity_1, entity_5);
}