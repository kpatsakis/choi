void fun()
{
  char* entity_4;
  char entity_6[43] = "";
  char* entity_8;
  entity_8 = (char*)malloc(40*sizeof(char));
  entity_8[0]='0';
  entity_4 = (char*)malloc(15*sizeof(char));
  entity_4[0]='0';
  memset(entity_6, 'P', 43-1);
  entity_6[43-1]='0';
  memcpy(entity_4, entity_6, 43*sizeof(char));
}