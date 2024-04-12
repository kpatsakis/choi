void fun()
{
  int entity_4 = 9;
  char entity_5[13] = "";
  char* entity_8;
  memset(entity_5, 'n', 13-1);
  entity_5[13-1]='0';
  entity_8 = (char*)malloc(entity_4*sizeof(char));
  entity_8[0]='0';
  strcpy(entity_8, entity_5);
}