void fun()
{
  int entity_8 = 82;
  char entity_1[31] = "";
  char* entity_6;
  memset(entity_1, 'X', 31-1);
  entity_1[31-1]='0';
  entity_6 = (char*)malloc(entity_8*sizeof(char));
  entity_6[0]='0';
  memcpy(entity_6, entity_1, 31*sizeof(char));
}