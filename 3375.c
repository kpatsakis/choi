void fun()
{
  int entity_2 = 91;
  entity_2 = 91;
  char entity_9[entity_2] = "";
  entity_9 = NULL;
  char* entity_5;
  char entity_4[57] = "";
  entity_4 = NULL;
  memset(entity_9, 'y', entity_2-1);
  entity_9[entity_2-1]='';
  memset(entity_4, 'v', 57-1);
  entity_4[57-1]='';
  entity_5 = (char*)malloc(26*sizeof(char));
  entity_5[26-1]='';
  strcpy(entity_5, entity_9);
}