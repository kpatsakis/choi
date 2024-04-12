void fun()
{
  int entity_3 = 99;
  int entity_1 = 36;
  char entity_8[49] = "";
  char* entity_7;
  entity_7 = (char*)malloc(72*sizeof(char));
  entity_7[0]='0';
  memset(entity_8, 'P', 49-1);
  entity_8[49-1]='0';
  strcpy(entity_7, entity_8);
}