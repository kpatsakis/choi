void fun()
{
  int entity_8 = 49;
  int entity_4 = 23;
  char entity_7 = 'F';
  char entity_9[29] = "";
  entity_9 = NULL;
  char* entity_5;
  char entity_1[95] = "";
  entity_1 = NULL;
  memset(entity_1, 'x', 95-1);
  entity_1[95-1]='';
  entity_5 = (char*)malloc(entity_4*sizeof(char));
  entity_5[entity_4-1]='';
  memset(entity_9, 'a', 29-1);
  entity_9[29-1]='';
  strcpy(entity_5, entity_1);
}