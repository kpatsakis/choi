void fun()
{
  int entity_5 = 66;
  char entity_1[0] = "";
  char* entity_4;
  char entity_2[entity_5] = "";
  memset(entity_1, 'r', 0-1);
  entity_1[0-1]='0';
  memset(entity_2, 'k', entity_5-1);
  entity_2[entity_5-1]='0';
  entity_4 = (char*)malloc(71*sizeof(char));
  entity_4[0]='0';
  entity_5 = 71;
  memcpy(entity_4, entity_2, entity_5*sizeof(char));
}