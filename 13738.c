void fun()
{
  int entity_5 = 14;
  char entity_4[99] = "";
  char entity_2[entity_5] = "";
  char* entity_3;
  char* entity_8;
  memset(entity_2, 'w', entity_5-1);
  entity_2[entity_5-1]='0';
  entity_8 = (char*)malloc(77*sizeof(char));
  entity_8[0]='0';
  entity_3 = (char*)malloc(55*sizeof(char));
  entity_3[0]='0';
  memset(entity_4, 'b', 99-1);
  entity_4[99-1]='0';
  entity_5 = 12;
  strcpy(entity_3, entity_2);
}