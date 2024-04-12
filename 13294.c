void fun()
{
  int entity_7 = 39;
  int entity_5 = 52;
  char entity_2[entity_5] = "";
  char* entity_1;
  char* entity_8;
  entity_1 = (char*)malloc(24*sizeof(char));
  entity_1[0]='0';
  entity_8 = (char*)malloc(91*sizeof(char));
  entity_8[0]='0';
  memset(entity_2, 'D', entity_5-1);
  entity_2[entity_5-1]='0';
  entity_5 = 94;
  strcpy(entity_8, entity_2);
}