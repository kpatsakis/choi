void fun()
{
  int entity_2 = 5;
  int entity_5 = 13;
  int entity_4 = 99;
  entity_2 = 5;
  char entity_9[entity_2] = "";
  entity_9 = NULL;
  char entity_0 = 'p';
  char* entity_1;
  entity_1 = (char*)malloc(73*sizeof(char));
  entity_1[73-1]='';
  memset(entity_9, 's', entity_2-1);
  entity_9[entity_2-1]='';
  strcpy(entity_1, entity_9);
}