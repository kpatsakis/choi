void fun()
{
  int entity_4 = 36;
  entity_4 = 11;
  char entity_8[70] = "";
  char entity_7[14] = "";
  char* entity_3;
  char entity_0 = 'm';
  memset(entity_7, 'a', 14-1);
  entity_7[14-1]='0';
  memset(entity_8, 'o', 70-1);
  entity_8[70-1]='0';
  entity_3 = (char*)malloc(entity_4*sizeof(char));
  entity_3[0]='0';
  memcpy(entity_3, entity_8, 70*sizeof(char));
}