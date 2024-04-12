void fun()
{
  int entity_4 = 41;
  entity_4 = 57;
  char entity_7[entity_4] = "";
  char* entity_5;
  char entity_8 = 'a';
  char entity_6[98] = "";
  memset(entity_6, 'Y', 98-1);
  entity_6[98-1]='0';
  entity_5 = (char*)malloc(100*sizeof(char));
  entity_5[0]='0';
  memset(entity_7, 'S', entity_4-1);
  entity_7[entity_4-1]='0';
  memcpy(entity_5, entity_7, entity_4*sizeof(char));
}