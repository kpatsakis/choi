void fun()
{
  int entity_4 = 97;
  char entity_8[39] = "";
  char* entity_6;
  entity_6 = (char*)malloc(85*sizeof(char));
  entity_6[0]='0';
  memset(entity_8, 'w', 39-1);
  entity_8[39-1]='0';
  strcpy(entity_6, entity_8);
}