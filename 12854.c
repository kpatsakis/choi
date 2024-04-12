void fun()
{
  int entity_5 = 13;
  char* entity_8;
  char entity_3[84] = "";
  entity_8 = (char*)malloc(entity_5*sizeof(char));
  entity_8[0]='0';
  memset(entity_3, 'j', 84-1);
  entity_3[84-1]='0';
  memcpy(entity_8, entity_3, 84*sizeof(char));
}