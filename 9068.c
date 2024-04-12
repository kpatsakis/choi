void fun()
{
  int entity_1 = 17;
  char entity_5[entity_1] = "";
  entity_5 = NULL;
  char entity_2[95] = "";
  entity_2 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(6*sizeof(char));
  entity_9[6-1]='';
  memset(entity_2, 'f', 95-1);
  entity_2[95-1]='';
  memset(entity_5, 'e', entity_1-1);
  entity_5[entity_1-1]='';
  strcpy(entity_9, entity_5);
}