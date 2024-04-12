void fun()
{
  int entity_8 = 11;
  char entity_3[75] = "";
  char* entity_0;
  memset(entity_3, 'J', 75-1);
  entity_3[75-1]='0';
  entity_0 = (char*)malloc(entity_8*sizeof(char));
  entity_0[0]='0';
  strcpy(entity_0, entity_3);
}