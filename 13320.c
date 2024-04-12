void fun()
{
  int entity_6 = 27;
  entity_6 = 21;
  char entity_3[90] = "";
  char entity_7[13] = "";
  char entity_8 = 'L';
  char* entity_5;
  char entity_0[entity_6] = "";
  entity_5 = (char*)malloc(20*sizeof(char));
  entity_5[0]='0';
  memset(entity_7, 'V', 13-1);
  entity_7[13-1]='0';
  memset(entity_0, 'C', entity_6-1);
  entity_0[entity_6-1]='0';
  memset(entity_3, 'x', 90-1);
  entity_3[90-1]='0';
  memcpy(entity_5, entity_0, entity_6*sizeof(char));
}