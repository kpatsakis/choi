void fun()
{
  int entity_3 = 67;
  char* entity_8;
  char entity_0[75] = "";
  char entity_5[85] = "";
  memset(entity_0, 'u', 75-1);
  entity_0[75-1]='0';
  memset(entity_5, 'E', 85-1);
  entity_5[85-1]='0';
  entity_8 = (char*)malloc(39*sizeof(char));
  entity_8[0]='0';
  strcpy(entity_8, entity_5);
}