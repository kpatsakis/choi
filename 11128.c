void fun()
{
  char* entity_8;
  char entity_4[47] = "";
  memset(entity_4, 'x', 47-1);
  entity_4[47-1]='0';
  entity_8 = (char*)malloc(89*sizeof(char));
  entity_8[0]='0';
  memcpy(entity_8, entity_4, 47*sizeof(char));
}