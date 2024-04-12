void fun()
{
  int entity_2 = 40;
  entity_2 = 28;
  char entity_1[1] = "";
  entity_1 = NULL;
  char* entity_9;
  char entity_7 = 'J';
  entity_9 = (char*)malloc(entity_2*sizeof(char));
  entity_9[entity_2-1]='';
  memset(entity_1, 'W', 1-1);
  entity_1[1-1]='';
  strcpy(entity_9, entity_1);
}