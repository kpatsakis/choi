void fun()
{
  int entity_5 = 59;
  entity_5 = 59;
  char entity_2 = 'W';
  char* entity_9;
  char entity_1[entity_5] = "";
  entity_1 = NULL;
  memset(entity_1, 'i', entity_5-1);
  entity_1[entity_5-1]='';
  entity_9 = (char*)malloc(36*sizeof(char));
  entity_9[36-1]='';
  strcpy(entity_9, entity_1);
}