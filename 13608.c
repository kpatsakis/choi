void fun()
{
  int entity_7 = 26;
  int entity_1 = 63;
  entity_7 = 85;
  char entity_5[61] = "";
  char entity_0 = 'W';
  char* entity_6;
  char entity_2[entity_7] = "";
  memset(entity_2, 'V', entity_7-1);
  entity_2[entity_7-1]='0';
  memset(entity_5, 'f', 61-1);
  entity_5[61-1]='0';
  entity_6 = (char*)malloc(81*sizeof(char));
  entity_6[0]='0';
  memcpy(entity_6, entity_2, entity_7*sizeof(char));
}