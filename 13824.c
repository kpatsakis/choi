void fun()
{
  int entity_2 = 85;
  int entity_7 = 9;
  char entity_1[15] = "";
  char* entity_5;
  char entity_6[entity_2] = "";
  memset(entity_1, 'j', 15-1);
  entity_1[15-1]='0';
  entity_5 = (char*)malloc(37*sizeof(char));
  entity_5[0]='0';
  memset(entity_6, 'W', entity_2-1);
  entity_6[entity_2-1]='0';
  entity_2 = 3;
  memcpy(entity_5, entity_6, entity_2*sizeof(char));
}