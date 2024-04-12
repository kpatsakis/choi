void fun()
{
  int entity_0 = 53;
  int entity_8 = 53;
  char* entity_5;
  char entity_7[58] = "";
  memset(entity_7, 'o', 58-1);
  entity_7[58-1]='0';
  entity_5 = (char*)malloc(entity_8*sizeof(char));
  entity_5[0]='0';
  memcpy(entity_5, entity_7, 58*sizeof(char));
}