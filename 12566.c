void fun()
{
  int entity_3 = 55;
  int entity_6 = 79;
  char* entity_4;
  char entity_1[entity_3] = "";
  entity_4 = (char*)malloc(31*sizeof(char));
  entity_4[0]='0';
  memset(entity_1, 'o', entity_3-1);
  entity_1[entity_3-1]='0';
  strcpy(entity_4, entity_1);
}