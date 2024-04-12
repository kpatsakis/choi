void fun()
{
  int entity_4 = 37;
  entity_4 = 2;
  char* entity_7;
  char entity_1[entity_4] = "";
  memset(entity_1, 'T', entity_4-1);
  entity_1[entity_4-1]='0';
  entity_7 = (char*)malloc(77*sizeof(char));
  entity_7[0]='0';
  memcpy(entity_7, entity_1, entity_4*sizeof(char));
}