void fun()
{
  int entity_5 = 84;
  char* entity_4;
  char entity_3 = 'l';
  char entity_8[49] = "";
  memset(entity_8, 'd', 49-1);
  entity_8[49-1]='0';
  entity_4 = (char*)malloc(entity_5*sizeof(char));
  entity_4[0]='0';
  memcpy(entity_4, entity_8, 49*sizeof(char));
}