void fun()
{
  int entity_3 = 63;
  int entity_7 = 73;
  char* entity_8;
  char entity_2[entity_3] = "";
  char entity_1 = 'Q';
  char* entity_6;
  entity_6 = (char*)malloc(44*sizeof(char));
  entity_6[0]='0';
  entity_8 = (char*)malloc(49*sizeof(char));
  entity_8[0]='0';
  memset(entity_2, 'H', entity_3-1);
  entity_2[entity_3-1]='0';
  memcpy(entity_8, entity_2, entity_3*sizeof(char));
}