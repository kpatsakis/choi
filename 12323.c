void fun()
{
  int entity_4 = 51;
  char* entity_8;
  char entity_5[67] = "";
  char entity_7 = 'C';
  char entity_6[entity_4] = "";
  char entity_9[6] = "";
  memset(entity_5, 'G', 67-1);
  entity_5[67-1]='0';
  memset(entity_6, 'g', entity_4-1);
  entity_6[entity_4-1]='0';
  entity_8 = (char*)malloc(18*sizeof(char));
  entity_8[0]='0';
  memset(entity_9, 'n', 6-1);
  entity_9[6-1]='0';
  memcpy(entity_8, entity_6, entity_4*sizeof(char));
}