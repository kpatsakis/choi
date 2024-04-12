void fun()
{
  int entity_6 = 84;
  char entity_4[entity_6] = "";
  char entity_8[56] = "";
  char* entity_7;
  char* entity_5;
  char entity_3[41] = "";
  memset(entity_8, 'c', 56-1);
  entity_8[56-1]='0';
  memset(entity_4, 'J', entity_6-1);
  entity_4[entity_6-1]='0';
  entity_7 = (char*)malloc(17*sizeof(char));
  entity_7[0]='0';
  entity_5 = (char*)malloc(45*sizeof(char));
  entity_5[0]='0';
  memset(entity_3, 'M', 41-1);
  entity_3[41-1]='0';
  memcpy(entity_7, entity_4, entity_6*sizeof(char));
}