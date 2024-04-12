void fun()
{
  int entity_4 = 74;
  char entity_8[79] = "";
  char* entity_3;
  memset(entity_8, 'y', 79-1);
  entity_8[79-1]='0';
  entity_3 = (char*)malloc(entity_4*sizeof(char));
  entity_3[0]='0';
  entity_4 = 37;
  memcpy(entity_3, entity_8, 79*sizeof(char));
}