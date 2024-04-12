void fun()
{
  int entity_2 = 13;
  entity_2 = 13;
  char* entity_5;
  char entity_6[84] = "";
  char entity_1[entity_2] = "";
  memset(entity_6, 'P', 84-1);
  entity_6[84-1]='0';
  memset(entity_1, 'o', entity_2-1);
  entity_1[entity_2-1]='0';
  entity_5 = (char*)malloc(91*sizeof(char));
  entity_5[0]='0';
  strcpy(entity_5, entity_1);
}