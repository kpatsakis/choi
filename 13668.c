void fun()
{
  int entity_0 = 56;
  int entity_4 = 30;
  char entity_8 = 'J';
  char* entity_6;
  char entity_9[entity_4] = "";
  entity_6 = (char*)malloc(77*sizeof(char));
  entity_6[0]='0';
  memset(entity_9, 'b', entity_4-1);
  entity_9[entity_4-1]='0';
  entity_4 = 59;
  strcpy(entity_6, entity_9);
}