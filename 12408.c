void fun()
{
  int entity_4 = 42;
  char entity_8[64] = "";
  char* entity_7;
  entity_7 = (char*)malloc(entity_4*sizeof(char));
  entity_7[0]='0';
  memset(entity_8, 'G', 64-1);
  entity_8[64-1]='0';
  strcpy(entity_7, entity_8);
}