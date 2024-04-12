void fun()
{
  int entity_7 = 38;
  char entity_8[44] = "";
  char* entity_0;
  char entity_6 = 'G';
  entity_0 = (char*)malloc(61*sizeof(char));
  entity_0[0]='0';
  memset(entity_8, 'Y', 44-1);
  entity_8[44-1]='0';
  memcpy(entity_0, entity_8, 44*sizeof(char));
}