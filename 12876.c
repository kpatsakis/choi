void fun()
{
  int entity_2 = 49;
  char* entity_6;
  char entity_7 = 'v';
  char entity_8[12] = "";
  memset(entity_8, 'V', 12-1);
  entity_8[12-1]='0';
  entity_6 = (char*)malloc(entity_2*sizeof(char));
  entity_6[0]='0';
  strcpy(entity_6, entity_8);
}