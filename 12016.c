void fun()
{
  int entity_7 = 32;
  char* entity_8;
  char entity_5[8] = "";
  entity_8 = (char*)malloc(entity_7*sizeof(char));
  entity_8[0]='0';
  memset(entity_5, 'u', 8-1);
  entity_5[8-1]='0';
  memcpy(entity_8, entity_5, 8*sizeof(char));
}