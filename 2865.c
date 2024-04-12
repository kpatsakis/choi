void fun()
{
  int entity_2 = 1;
  entity_2 = 1;
  char entity_7 = 'W';
  char entity_9[entity_2] = "";
  entity_9 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(34*sizeof(char));
  entity_1[34-1]='';
  memset(entity_9, 'J', entity_2-1);
  entity_9[entity_2-1]='';
  strcpy(entity_1, entity_9);
}