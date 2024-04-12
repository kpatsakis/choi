void fun()
{
  int entity_5 = 12;
  entity_5 = 38;
  char entity_7[99] = "";
  char* entity_4;
  entity_4 = (char*)malloc(entity_5*sizeof(char));
  entity_4[0]='0';
  memset(entity_7, 'X', 99-1);
  entity_7[99-1]='0';
  memcpy(entity_4, entity_7, 99*sizeof(char));
}