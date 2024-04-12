void fun()
{
  int entity_9 = 75;
  char* entity_5;
  char entity_1[95] = "";
  entity_1 = NULL;
  memset(entity_1, 'i', 95-1);
  entity_1[95-1]='';
  entity_5 = (char*)malloc(entity_9*sizeof(char));
  entity_5[entity_9-1]='';
  entity_9 = 30;
  strcpy(entity_5, entity_1);
}