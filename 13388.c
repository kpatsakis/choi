void fun()
{
  int entity_8 = 60;
  entity_8 = 79;
  char entity_7[entity_8] = "";
  char entity_5[26] = "";
  char* entity_9;
  char entity_3 = 'W';
  memset(entity_5, 'M', 26-1);
  entity_5[26-1]='0';
  entity_9 = (char*)malloc(55*sizeof(char));
  entity_9[0]='0';
  memset(entity_7, 'n', entity_8-1);
  entity_7[entity_8-1]='0';
  memcpy(entity_9, entity_7, entity_8*sizeof(char));
}