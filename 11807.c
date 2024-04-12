void fun()
{
  char* entity_1;
  char entity_6[97] = "";
  char* entity_8;
  memset(entity_6, 'O', 97-1);
  entity_6[97-1]='0';
  entity_1 = (char*)malloc(27*sizeof(char));
  entity_1[0]='0';
  entity_8 = (char*)malloc(84*sizeof(char));
  entity_8[0]='0';
  memcpy(entity_1, entity_6, 97*sizeof(char));
}