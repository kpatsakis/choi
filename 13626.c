void fun()
{
  int entity_7 = 35;
  int entity_2 = 25;
  char* entity_6;
  char* entity_4;
  char entity_8[entity_7] = "";
  char entity_3[37] = "";
  memset(entity_3, 'v', 37-1);
  entity_3[37-1]='0';
  entity_4 = (char*)malloc(59*sizeof(char));
  entity_4[0]='0';
  entity_6 = (char*)malloc(44*sizeof(char));
  entity_6[0]='0';
  memset(entity_8, 'i', entity_7-1);
  entity_8[entity_7-1]='0';
  entity_7 = 13;
  memcpy(entity_6, entity_8, entity_7*sizeof(char));
}