void fun()
{
  int entity_6 = 1;
  int entity_3 = 21;
  char entity_1[entity_3] = "";
  char entity_8[13] = "";
  char entity_0 = 'J';
  char* entity_2;
  entity_2 = (char*)malloc(41*sizeof(char));
  entity_2[0]='0';
  memset(entity_8, 'Y', 13-1);
  entity_8[13-1]='0';
  memset(entity_1, 'h', entity_3-1);
  entity_1[entity_3-1]='0';
  memcpy(entity_2, entity_1, entity_3*sizeof(char));
}