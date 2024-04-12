void fun()
{
  int entity_4 = 49;
  int entity_2 = 75;
  int entity_5 = 82;
  char entity_6[entity_4] = "";
  char* entity_1;
  memset(entity_6, 'L', entity_4-1);
  entity_6[entity_4-1]='0';
  entity_1 = (char*)malloc(20*sizeof(char));
  entity_1[0]='0';
  memcpy(entity_1, entity_6, entity_4*sizeof(char));
}