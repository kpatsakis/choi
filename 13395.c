void fun()
{
  int entity_6 = 4;
  entity_6 = 40;
  char entity_0[15] = "";
  char* entity_8;
  entity_8 = (char*)malloc(entity_6*sizeof(char));
  entity_8[0]='0';
  memset(entity_0, 'e', 15-1);
  entity_0[15-1]='0';
  memcpy(entity_8, entity_0, 15*sizeof(char));
}