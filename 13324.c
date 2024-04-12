void fun()
{
  int entity_6 = 3;
  int entity_1 = 78;
  int entity_9 = 74;
  char* entity_8;
  char entity_2[81] = "";
  char entity_3[28] = "";
  memset(entity_3, 'P', 28-1);
  entity_3[28-1]='0';
  entity_8 = (char*)malloc(entity_9*sizeof(char));
  entity_8[0]='0';
  memset(entity_2, 'V', 81-1);
  entity_2[81-1]='0';
  entity_9 = 33;
  strcpy(entity_8, entity_2);
}