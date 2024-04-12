void fun()
{
  int entity_2 = 42;
  int entity_1 = 34;
  entity_2 = 68;
  char entity_4[97] = "";
  char* entity_6;
  char entity_3[8] = "";
  char* entity_8;
  memset(entity_3, 'F', 8-1);
  entity_3[8-1]='0';
  memset(entity_4, 'd', 97-1);
  entity_4[97-1]='0';
  entity_6 = (char*)malloc(52*sizeof(char));
  entity_6[0]='0';
  entity_8 = (char*)malloc(entity_2*sizeof(char));
  entity_8[0]='0';
  memcpy(entity_8, entity_3, 8*sizeof(char));
}