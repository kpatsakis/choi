void fun()
{
  int entity_4 = 50;
  char* entity_9;
  char entity_1[50] = "";
  char entity_8[entity_4] = "";
  char* entity_7;
  entity_9 = (char*)malloc(54*sizeof(char));
  entity_9[0]='0';
  memset(entity_8, 'K', entity_4-1);
  entity_8[entity_4-1]='0';
  memset(entity_1, 'j', 50-1);
  entity_1[50-1]='0';
  entity_7 = (char*)malloc(76*sizeof(char));
  entity_7[0]='0';
  strcpy(entity_7, entity_8);
}