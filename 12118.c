void fun()
{
  int entity_8 = 48;
  char entity_9[entity_8] = "";
  char entity_0[68] = "";
  char entity_1[40] = "";
  char* entity_6;
  memset(entity_9, 'H', entity_8-1);
  entity_9[entity_8-1]='0';
  entity_6 = (char*)malloc(44*sizeof(char));
  entity_6[0]='0';
  memset(entity_1, 's', 40-1);
  entity_1[40-1]='0';
  memset(entity_0, 'a', 68-1);
  entity_0[68-1]='0';
  memcpy(entity_6, entity_9, entity_8*sizeof(char));
}