void fun()
{
  int entity_5 = 33;
  entity_5 = 33;
  char entity_3 = 'A';
  char entity_6[entity_5] = "";
  char* entity_1;
  char entity_2[28] = "";
  entity_1 = (char*)malloc(80*sizeof(char));
  entity_1[0]='0';
  memset(entity_2, 'P', 28-1);
  entity_2[28-1]='0';
  memset(entity_6, 'j', entity_5-1);
  entity_6[entity_5-1]='0';
  strcpy(entity_1, entity_6);
}