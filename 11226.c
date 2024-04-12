void fun()
{
  char* entity_4;
  char entity_8[52] = "";
  entity_4 = (char*)malloc(31*sizeof(char));
  entity_4[0]='0';
  memset(entity_8, 'E', 52-1);
  entity_8[52-1]='0';
  memcpy(entity_4, entity_8, 52*sizeof(char));
}