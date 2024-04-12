void fun()
{
  int entity_4 = 16;
  int entity_1 = 2;
  char* entity_5;
  char entity_2[entity_1] = "";
  memset(entity_2, 'H', entity_1-1);
  entity_2[entity_1-1]='0';
  entity_5 = (char*)malloc(84*sizeof(char));
  entity_5[0]='0';
  entity_1 = 36;
  strcpy(entity_5, entity_2);
}