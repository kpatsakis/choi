void fun()
{
  int entity_1 = 38;
  int entity_7 = 40;
  entity_7 = 40;
  char* entity_8;
  char entity_6[95] = "";
  entity_8 = (char*)malloc(entity_7*sizeof(char));
  entity_8[0]='0';
  memset(entity_6, 'h', 95-1);
  entity_6[95-1]='0';
  strcpy(entity_8, entity_6);
}