void fun()
{
  int entity_0 = 54;
  int entity_5 = 89;
  char* entity_8;
  char entity_4 = 'L';
  char entity_7[90] = "";
  memset(entity_7, 'Y', 90-1);
  entity_7[90-1]='0';
  entity_8 = (char*)malloc(83*sizeof(char));
  entity_8[0]='0';
  memcpy(entity_8, entity_7, 90*sizeof(char));
}