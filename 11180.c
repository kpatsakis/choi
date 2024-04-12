void fun()
{
  char* entity_8;
  char entity_4[95] = "";
  memset(entity_4, 'M', 95-1);
  entity_4[95-1]='0';
  entity_8 = (char*)malloc(38*sizeof(char));
  entity_8[0]='0';
  memcpy(entity_8, entity_4, 95*sizeof(char));
}