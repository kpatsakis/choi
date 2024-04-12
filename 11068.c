void fun()
{
  char entity_8[67] = "";
  char* entity_4;
  memset(entity_8, 'l', 67-1);
  entity_8[67-1]='0';
  entity_4 = (char*)malloc(68*sizeof(char));
  entity_4[0]='0';
  memcpy(entity_4, entity_8, 67*sizeof(char));
}