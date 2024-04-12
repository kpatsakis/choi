void fun()
{
  char* entity_8;
  char entity_4[76] = "";
  char* entity_6;
  entity_6 = (char*)malloc(72*sizeof(char));
  entity_6[0]='0';
  entity_8 = (char*)malloc(66*sizeof(char));
  entity_8[0]='0';
  memset(entity_4, 'A', 76-1);
  entity_4[76-1]='0';
  memcpy(entity_8, entity_4, 76*sizeof(char));
}