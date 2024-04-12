void fun()
{
  int entity_8 = 97;
  char entity_3[0] = "";
  char* entity_6;
  char entity_1[90] = "";
  entity_6 = (char*)malloc(entity_8*sizeof(char));
  entity_6[0]='0';
  memset(entity_1, 'a', 90-1);
  entity_1[90-1]='0';
  memset(entity_3, 'V', 0-1);
  entity_3[0-1]='0';
  memcpy(entity_6, entity_1, 90*sizeof(char));
}