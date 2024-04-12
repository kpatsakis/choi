void fun()
{
  int entity_4 = 53;
  char* entity_5;
  char entity_7[63] = "";
  char* entity_3;
  char entity_8[entity_4] = "";
  entity_5 = (char*)malloc(11*sizeof(char));
  entity_5[0]='0';
  memset(entity_8, 'H', entity_4-1);
  entity_8[entity_4-1]='0';
  entity_3 = (char*)malloc(40*sizeof(char));
  entity_3[0]='0';
  memset(entity_7, 'z', 63-1);
  entity_7[63-1]='0';
  strcpy(entity_5, entity_8);
}