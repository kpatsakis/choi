void fun()
{
  int entity_2 = 47;
  char* entity_8;
  char entity_1[48] = "";
  char entity_0[40] = "";
  memset(entity_1, 'S', 48-1);
  entity_1[48-1]='0';
  entity_8 = (char*)malloc(entity_2*sizeof(char));
  entity_8[0]='0';
  memset(entity_0, 'E', 40-1);
  entity_0[40-1]='0';
  entity_2 = 88;
  memcpy(entity_8, entity_0, 40*sizeof(char));
}