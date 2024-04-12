void fun()
{
  char* entity_8;
  char entity_6[34] = "";
  entity_8 = (char*)malloc(41*sizeof(char));
  entity_8[0]='0';
  memset(entity_6, 'Q', 34-1);
  entity_6[34-1]='0';
  memcpy(entity_8, entity_6, 34*sizeof(char));
}