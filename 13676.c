void fun()
{
  int entity_4 = 65;
  int entity_8 = 14;
  entity_4 = 64;
  char* entity_1;
  char entity_3[entity_4] = "";
  char entity_9[72] = "";
  memset(entity_9, 'Q', 72-1);
  entity_9[72-1]='0';
  memset(entity_3, 'L', entity_4-1);
  entity_3[entity_4-1]='0';
  entity_1 = (char*)malloc(98*sizeof(char));
  entity_1[0]='0';
  memcpy(entity_1, entity_3, entity_4*sizeof(char));
}