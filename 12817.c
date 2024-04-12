void fun()
{
  int entity_4 = 99;
  char entity_3[17] = "";
  char* entity_6;
  char entity_0[89] = "";
  memset(entity_0, 'w', 89-1);
  entity_0[89-1]='0';
  memset(entity_3, 'V', 17-1);
  entity_3[17-1]='0';
  entity_6 = (char*)malloc(entity_4*sizeof(char));
  entity_6[0]='0';
  strcpy(entity_6, entity_3);
}