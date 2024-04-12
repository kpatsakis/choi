void fun()
{
  int entity_1 = 66;
  char entity_8[entity_1] = "";
  char* entity_3;
  char entity_6[13] = "";
  char entity_7 = 't';
  entity_3 = (char*)malloc(83*sizeof(char));
  entity_3[0]='0';
  memset(entity_6, 'y', 13-1);
  entity_6[13-1]='0';
  memset(entity_8, 'c', entity_1-1);
  entity_8[entity_1-1]='0';
  memcpy(entity_3, entity_8, entity_1*sizeof(char));
}