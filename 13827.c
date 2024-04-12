void fun()
{
  int entity_8 = 41;
  char entity_7[2] = "";
  char entity_1[entity_8] = "";
  char* entity_5;
  char entity_9[48] = "";
  entity_5 = (char*)malloc(51*sizeof(char));
  entity_5[0]='0';
  memset(entity_9, 'N', 48-1);
  entity_9[48-1]='0';
  memset(entity_1, 'G', entity_8-1);
  entity_1[entity_8-1]='0';
  memset(entity_7, 'o', 2-1);
  entity_7[2-1]='0';
  entity_8 = 40;
  strcpy(entity_5, entity_1);
}