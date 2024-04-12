void fun()
{
  char* entity_8;
  char entity_6[75] = "";
  entity_8 = (char*)malloc(59*sizeof(char));
  entity_8[0]='0';
  memset(entity_6, 'W', 75-1);
  entity_6[75-1]='0';
  memcpy(entity_8, entity_6, 75*sizeof(char));
}