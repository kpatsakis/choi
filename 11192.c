void fun()
{
  int entity_0 = 7;
  char entity_5[84] = "";
  char* entity_4;
  memset(entity_5, 'd', 84-1);
  entity_5[84-1]='0';
  entity_4 = (char*)malloc(27*sizeof(char));
  entity_4[0]='0';
  memcpy(entity_4, entity_5, 84*sizeof(char));
}