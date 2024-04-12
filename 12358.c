void fun()
{
  int entity_5 = 52;
  int entity_4 = 65;
  char entity_0 = 'z';
  char entity_1 = 'p';
  char* entity_6;
  char entity_2[entity_5] = "";
  entity_6 = (char*)malloc(42*sizeof(char));
  entity_6[0]='0';
  memset(entity_2, 'p', entity_5-1);
  entity_2[entity_5-1]='0';
  strcpy(entity_6, entity_2);
}