void fun()
{
  int entity_4 = 48;
  char* entity_1;
  char entity_9 = 'm';
  char entity_5[17] = "";
  entity_5 = NULL;
  memset(entity_5, 'c', 17-1);
  entity_5[17-1]='';
  entity_1 = (char*)malloc(entity_4*sizeof(char));
  entity_1[entity_4-1]='';
  strcpy(entity_1, entity_5);
}