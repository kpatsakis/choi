void fun()
{
  int entity_4 = 91;
  entity_4 = 45;
  char entity_6[97] = "";
  char* entity_3;
  char entity_8[entity_4] = "";
  memset(entity_6, 'G', 97-1);
  entity_6[97-1]='0';
  entity_3 = (char*)malloc(22*sizeof(char));
  entity_3[0]='0';
  memset(entity_8, 'S', entity_4-1);
  entity_8[entity_4-1]='0';
  memcpy(entity_3, entity_8, entity_4*sizeof(char));
}