void fun()
{
  int entity_1 = 87;
  int entity_0 = 7;
  char entity_6[58] = "";
  char* entity_7;
  memset(entity_6, 'J', 58-1);
  entity_6[58-1]='0';
  entity_7 = (char*)malloc(entity_0*sizeof(char));
  entity_7[0]='0';
  memcpy(entity_7, entity_6, 58*sizeof(char));
}