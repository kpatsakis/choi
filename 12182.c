void fun()
{
  int entity_1 = 74;
  int entity_8 = 68;
  char entity_3[83] = "";
  char* entity_4;
  entity_4 = (char*)malloc(entity_8*sizeof(char));
  entity_4[0]='0';
  memset(entity_3, 'c', 83-1);
  entity_3[83-1]='0';
  memcpy(entity_4, entity_3, 83*sizeof(char));
}