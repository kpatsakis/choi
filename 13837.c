void fun()
{
  int entity_4 = 67;
  entity_4 = 15;
  char* entity_8;
  char entity_1 = 'v';
  char entity_0[90] = "";
  entity_8 = (char*)malloc(entity_4*sizeof(char));
  entity_8[0]='0';
  memset(entity_0, 'B', 90-1);
  entity_0[90-1]='0';
  memcpy(entity_8, entity_0, 90*sizeof(char));
}