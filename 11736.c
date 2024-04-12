void fun()
{
  int entity_7 = 8;
  char* entity_5;
  char entity_1[84] = "";
  memset(entity_1, 'o', 84-1);
  entity_1[84-1]='0';
  entity_5 = (char*)malloc(31*sizeof(char));
  entity_5[0]='0';
  memcpy(entity_5, entity_1, 84*sizeof(char));
}