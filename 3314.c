void fun()
{
  int entity_3 = 48;
  int entity_5 = 42;
  entity_5 = 42;
  char* entity_2;
  char entity_6[entity_5] = "";
  entity_6 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(26*sizeof(char));
  entity_9[26-1]='';
  entity_2 = (char*)malloc(89*sizeof(char));
  entity_2[89-1]='';
  memset(entity_6, 'H', entity_5-1);
  entity_6[entity_5-1]='';
  strcpy(entity_2, entity_6);
}