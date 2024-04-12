void fun()
{
  int entity_2 = 10;
  int entity_7 = 58;
  entity_7 = 58;
  char* entity_6;
  char* entity_5;
  char entity_1[entity_7] = "";
  entity_5 = (char*)malloc(65*sizeof(char));
  entity_5[0]='0';
  entity_6 = (char*)malloc(98*sizeof(char));
  entity_6[0]='0';
  memset(entity_1, 'V', entity_7-1);
  entity_1[entity_7-1]='0';
  strcpy(entity_5, entity_1);
}