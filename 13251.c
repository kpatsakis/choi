void fun()
{
  int entity_1 = 15;
  char entity_7[entity_1] = "";
  char* entity_4;
  char entity_8[2] = "";
  memset(entity_7, 'Y', entity_1-1);
  entity_7[entity_1-1]='0';
  entity_4 = (char*)malloc(80*sizeof(char));
  entity_4[0]='0';
  memset(entity_8, 'X', 2-1);
  entity_8[2-1]='0';
  entity_1 = 19;
  strcpy(entity_4, entity_7);
}