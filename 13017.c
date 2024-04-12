void fun()
{
  int entity_1 = 88;
  entity_1 = 88;
  char* entity_4;
  char entity_3[entity_1] = "";
  char entity_6[76] = "";
  entity_4 = (char*)malloc(83*sizeof(char));
  entity_4[0]='0';
  memset(entity_6, 'z', 76-1);
  entity_6[76-1]='0';
  memset(entity_3, 'T', entity_1-1);
  entity_3[entity_1-1]='0';
  strcpy(entity_4, entity_3);
}