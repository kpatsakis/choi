void fun()
{
  int entity_4 = 31;
  entity_4 = 71;
  char* entity_0;
  char entity_2[56] = "";
  char entity_8[68] = "";
  memset(entity_2, 'H', 56-1);
  entity_2[56-1]='0';
  entity_0 = (char*)malloc(entity_4*sizeof(char));
  entity_0[0]='0';
  memset(entity_8, 'w', 68-1);
  entity_8[68-1]='0';
  strcpy(entity_0, entity_2);
}