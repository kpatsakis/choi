void fun()
{
  char entity_7[88] = "";
  char* entity_8;
  memset(entity_7, 'T', 88-1);
  entity_7[88-1]='0';
  entity_8 = (char*)malloc(81*sizeof(char));
  entity_8[0]='0';
  memcpy(entity_8, entity_7, 88*sizeof(char));
}