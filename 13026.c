void fun()
{
  int entity_7 = 91;
  int entity_3 = 9;
  entity_7 = 91;
  char entity_1[entity_7] = "";
  char* entity_8;
  char entity_2[83] = "";
  char* entity_4;
  memset(entity_1, 'x', entity_7-1);
  entity_1[entity_7-1]='0';
  entity_4 = (char*)malloc(9*sizeof(char));
  entity_4[0]='0';
  memset(entity_2, 'H', 83-1);
  entity_2[83-1]='0';
  entity_8 = (char*)malloc(14*sizeof(char));
  entity_8[0]='0';
  strcpy(entity_4, entity_1);
}