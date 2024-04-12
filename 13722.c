void fun()
{
  int entity_8 = 17;
  entity_8 = 93;
  char entity_7[93] = "";
  char entity_3[entity_8] = "";
  char* entity_4;
  entity_4 = (char*)malloc(38*sizeof(char));
  entity_4[0]='0';
  memset(entity_7, 'T', 93-1);
  entity_7[93-1]='0';
  memset(entity_3, 'y', entity_8-1);
  entity_3[entity_8-1]='0';
  memcpy(entity_4, entity_3, entity_8*sizeof(char));
}