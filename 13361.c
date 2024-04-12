void fun()
{
  int entity_8 = 35;
  char entity_3 = 'Q';
  char entity_2[entity_8] = "";
  char entity_0[20] = "";
  char* entity_5;
  char entity_4[99] = "";
  entity_5 = (char*)malloc(87*sizeof(char));
  entity_5[0]='0';
  memset(entity_0, 'h', 20-1);
  entity_0[20-1]='0';
  memset(entity_4, 'C', 99-1);
  entity_4[99-1]='0';
  memset(entity_2, 'b', entity_8-1);
  entity_2[entity_8-1]='0';
  entity_8 = 83;
  strcpy(entity_5, entity_2);
}