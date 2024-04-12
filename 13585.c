void fun()
{
  int entity_3 = 30;
  int entity_6 = 48;
  entity_3 = 26;
  char entity_4[9] = "";
  char* entity_7;
  char entity_1[entity_3] = "";
  entity_7 = (char*)malloc(62*sizeof(char));
  entity_7[0]='0';
  memset(entity_1, 'U', entity_3-1);
  entity_1[entity_3-1]='0';
  memset(entity_4, 'i', 9-1);
  entity_4[9-1]='0';
  memcpy(entity_7, entity_1, entity_3*sizeof(char));
}