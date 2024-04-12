void fun()
{
  int entity_6 = 47;
  char entity_0 = 'J';
  char* entity_8;
  char entity_4[5] = "";
  char entity_5[entity_6] = "";
  memset(entity_4, 'L', 5-1);
  entity_4[5-1]='0';
  entity_8 = (char*)malloc(56*sizeof(char));
  entity_8[0]='0';
  memset(entity_5, 'M', entity_6-1);
  entity_5[entity_6-1]='0';
  memcpy(entity_8, entity_5, entity_6*sizeof(char));
}