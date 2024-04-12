void fun()
{
  int entity_7 = 65;
  int entity_6 = 45;
  char entity_3[28] = "";
  char entity_0[entity_7] = "";
  char* entity_4;
  memset(entity_3, 'E', 28-1);
  entity_3[28-1]='0';
  memset(entity_0, 'k', entity_7-1);
  entity_0[entity_7-1]='0';
  entity_4 = (char*)malloc(52*sizeof(char));
  entity_4[0]='0';
  entity_7 = 84;
  strcpy(entity_4, entity_0);
}