void fun()
{
  char entity_4[1] = "";
  char* entity_8;
  memset(entity_4, 'd', 1-1);
  entity_4[1-1]='0';
  entity_8 = (char*)malloc(74*sizeof(char));
  entity_8[0]='0';
  memcpy(entity_8, entity_4, 1*sizeof(char));
}