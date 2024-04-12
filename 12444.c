void fun()
{
  int entity_4 = 36;
  int entity_2 = 31;
  char entity_9[7] = "";
  char* entity_8;
  char entity_7[entity_2] = "";
  entity_8 = (char*)malloc(77*sizeof(char));
  entity_8[0]='0';
  memset(entity_7, 'X', entity_2-1);
  entity_7[entity_2-1]='0';
  memset(entity_9, 'J', 7-1);
  entity_9[7-1]='0';
  memcpy(entity_8, entity_7, entity_2*sizeof(char));
}