void fun()
{
  int entity_7 = 8;
  char* entity_4;
  char entity_3 = 'U';
  char* entity_2;
  char entity_5[entity_7] = "";
  entity_2 = (char*)malloc(38*sizeof(char));
  entity_2[0]='0';
  entity_4 = (char*)malloc(56*sizeof(char));
  entity_4[0]='0';
  memset(entity_5, 'y', entity_7-1);
  entity_5[entity_7-1]='0';
  entity_7 = 26;
  strcpy(entity_4, entity_5);
}