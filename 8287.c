void fun()
{
  int entity_7 = 22;
  int entity_2 = 53;
  char entity_9[entity_2] = "";
  entity_9 = NULL;
  char* entity_5;
  char entity_1[9] = "";
  entity_1 = NULL;
  memset(entity_9, 's', entity_2-1);
  entity_9[entity_2-1]='';
  entity_5 = (char*)malloc(57*sizeof(char));
  entity_5[57-1]='';
  memset(entity_1, 'O', 9-1);
  entity_1[9-1]='';
  strcpy(entity_5, entity_9);
}