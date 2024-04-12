void fun()
{
  int entity_0 = 61;
  char entity_2[71] = "";
  entity_2 = NULL;
  char* entity_1;
  char entity_6[entity_0] = "";
  entity_6 = NULL;
  char entity_4[28] = "";
  entity_4 = NULL;
  memset(entity_4, 'c', 28-1);
  entity_4[28-1]='';
  memset(entity_6, 'H', entity_0-1);
  entity_6[entity_0-1]='';
  entity_1 = (char*)malloc(40*sizeof(char));
  entity_1[40-1]='';
  memset(entity_2, 'W', 71-1);
  entity_2[71-1]='';
  entity_6[34] = 'I';
}