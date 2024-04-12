void fun()
{
  int entity_3 = 62;
  int entity_4 = 38;
  char entity_6 = 'Z';
  char* entity_5;
  char entity_2[entity_4] = "";
  memset(entity_2, 'r', entity_4-1);
  entity_2[entity_4-1]='0';
  entity_5 = (char*)malloc(26*sizeof(char));
  entity_5[0]='0';
  entity_4 = 51;
  strcpy(entity_5, entity_2);
}