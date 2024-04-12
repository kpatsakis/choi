void fun()
{
  int entity_0 = 70;
  int entity_4 = 37;
  char entity_9[entity_4] = "";
  char* entity_1;
  char* entity_8;
  entity_8 = (char*)malloc(56*sizeof(char));
  entity_8[0]='0';
  entity_1 = (char*)malloc(38*sizeof(char));
  entity_1[0]='0';
  memset(entity_9, 'N', entity_4-1);
  entity_9[entity_4-1]='0';
  strcpy(entity_8, entity_9);
}