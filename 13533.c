void fun()
{
  int entity_4 = 98;
  entity_4 = 98;
  char* entity_8;
  char entity_7[entity_4] = "";
  char entity_9[90] = "";
  memset(entity_9, 'Q', 90-1);
  entity_9[90-1]='0';
  memset(entity_7, 'm', entity_4-1);
  entity_7[entity_4-1]='0';
  entity_8 = (char*)malloc(77*sizeof(char));
  entity_8[0]='0';
  strcpy(entity_8, entity_7);
}