void fun()
{
  int entity_8 = 31;
  char entity_5[14] = "";
  char entity_7 = 'Y';
  char entity_2[entity_8] = "";
  char* entity_0;
  char entity_3 = 'W';
  memset(entity_2, 'Q', entity_8-1);
  entity_2[entity_8-1]='0';
  entity_0 = (char*)malloc(70*sizeof(char));
  entity_0[0]='0';
  memset(entity_5, 'u', 14-1);
  entity_5[14-1]='0';
  strcpy(entity_0, entity_2);
}