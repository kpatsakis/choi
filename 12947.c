void fun()
{
  int entity_1 = 91;
  int entity_8 = 69;
  char entity_0[84] = "";
  char entity_2 = 'o';
  char* entity_7;
  memset(entity_0, 'V', 84-1);
  entity_0[84-1]='0';
  entity_7 = (char*)malloc(entity_1*sizeof(char));
  entity_7[0]='0';
  memcpy(entity_7, entity_0, 84*sizeof(char));
}