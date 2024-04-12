void fun()
{
  int entity_5 = 73;
  char entity_4 = 'c';
  char* entity_2;
  char entity_3[84] = "";
  entity_2 = (char*)malloc(entity_5*sizeof(char));
  entity_2[0]='0';
  memset(entity_3, 'd', 84-1);
  entity_3[84-1]='0';
  memcpy(entity_2, entity_3, 84*sizeof(char));
}