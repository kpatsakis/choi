void fun()
{
  char* entity_8;
  char* entity_7;
  char entity_4[37] = "";
  memset(entity_4, 'c', 37-1);
  entity_4[37-1]='0';
  entity_7 = (char*)malloc(32*sizeof(char));
  entity_7[0]='0';
  entity_8 = (char*)malloc(11*sizeof(char));
  entity_8[0]='0';
  memcpy(entity_7, entity_4, 37*sizeof(char));
}