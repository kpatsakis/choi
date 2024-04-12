void fun()
{
  int entity_7 = 15;
  entity_7 = 73;
  char entity_9 = 'k';
  char entity_1[entity_7] = "";
  char* entity_8;
  char entity_5[11] = "";
  memset(entity_5, 'J', 11-1);
  entity_5[11-1]='0';
  entity_8 = (char*)malloc(42*sizeof(char));
  entity_8[0]='0';
  memset(entity_1, 'a', entity_7-1);
  entity_1[entity_7-1]='0';
  memcpy(entity_8, entity_1, entity_7*sizeof(char));
}