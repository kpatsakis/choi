void fun()
{
  int entity_3 = 87;
  int entity_7 = 24;
  char entity_8[8] = "";
  char* entity_6;
  entity_6 = (char*)malloc(entity_7*sizeof(char));
  entity_6[0]='0';
  memset(entity_8, 'c', 8-1);
  entity_8[8-1]='0';
  memcpy(entity_6, entity_8, 8*sizeof(char));
}