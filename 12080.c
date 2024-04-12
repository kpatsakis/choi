void fun()
{
  int entity_1 = 69;
  int entity_0 = 54;
  char entity_3[84] = "";
  char* entity_2;
  memset(entity_3, 'T', 84-1);
  entity_3[84-1]='0';
  entity_2 = (char*)malloc(entity_1*sizeof(char));
  entity_2[0]='0';
  memcpy(entity_2, entity_3, 84*sizeof(char));
}