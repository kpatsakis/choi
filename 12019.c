void fun()
{
  int entity_7 = 9;
  int entity_4 = 44;
  char* entity_8;
  char entity_1[entity_4] = "";
  memset(entity_1, 'c', entity_4-1);
  entity_1[entity_4-1]='0';
  entity_8 = (char*)malloc(9*sizeof(char));
  entity_8[0]='0';
  strcpy(entity_8, entity_1);
}