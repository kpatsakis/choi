void fun()
{
  int entity_7 = 63;
  char entity_5[79] = "";
  char* entity_8;
  memset(entity_5, 'f', 79-1);
  entity_5[79-1]='0';
  entity_8 = (char*)malloc(entity_7*sizeof(char));
  entity_8[0]='0';
  memcpy(entity_8, entity_5, 79*sizeof(char));
}