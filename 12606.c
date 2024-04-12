void fun()
{
  int entity_6 = 62;
  int entity_4 = 12;
  int entity_5 = 4;
  int entity_8 = 31;
  char entity_3[37] = "";
  char* entity_7;
  memset(entity_3, 'v', 37-1);
  entity_3[37-1]='0';
  entity_7 = (char*)malloc(entity_8*sizeof(char));
  entity_7[0]='0';
  memcpy(entity_7, entity_3, 37*sizeof(char));
}