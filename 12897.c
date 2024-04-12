void fun()
{
  int entity_5 = 12;
  char* entity_8;
  char entity_2 = 'i';
  char entity_4[16] = "";
  entity_8 = (char*)malloc(entity_5*sizeof(char));
  entity_8[0]='0';
  memset(entity_4, 'h', 16-1);
  entity_4[16-1]='0';
  memcpy(entity_8, entity_4, 16*sizeof(char));
}