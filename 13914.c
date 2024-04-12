void fun()
{
  int entity_3 = 84;
  int entity_4 = 93;
  char entity_5[entity_3] = "";
  char entity_1[71] = "";
  char* entity_6;
  memset(entity_1, 'k', 71-1);
  entity_1[71-1]='0';
  memset(entity_5, 'v', entity_3-1);
  entity_5[entity_3-1]='0';
  entity_6 = (char*)malloc(27*sizeof(char));
  entity_6[0]='0';
  entity_3 = 44;
  strcpy(entity_6, entity_5);
}