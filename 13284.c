void fun()
{
  int entity_5 = 54;
  entity_5 = 63;
  char* entity_7;
  char entity_6[entity_5] = "";
  char entity_1[91] = "";
  entity_7 = (char*)malloc(45*sizeof(char));
  entity_7[0]='0';
  memset(entity_6, 'Z', entity_5-1);
  entity_6[entity_5-1]='0';
  memset(entity_1, 't', 91-1);
  entity_1[91-1]='0';
  memcpy(entity_7, entity_6, entity_5*sizeof(char));
}