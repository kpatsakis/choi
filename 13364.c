void fun()
{
  int entity_2 = 48;
  int entity_7 = 54;
  char entity_0[40] = "";
  char* entity_6;
  entity_6 = (char*)malloc(entity_2*sizeof(char));
  entity_6[0]='0';
  memset(entity_0, 'H', 40-1);
  entity_0[40-1]='0';
  entity_2 = 54;
  memcpy(entity_6, entity_0, 40*sizeof(char));
}