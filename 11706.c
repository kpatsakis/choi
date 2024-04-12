void fun()
{
  char entity_8[95] = "";
  char* entity_7;
  char entity_9[96] = "";
  memset(entity_8, 'f', 95-1);
  entity_8[95-1]='0';
  memset(entity_9, 'm', 96-1);
  entity_9[96-1]='0';
  entity_7 = (char*)malloc(87*sizeof(char));
  entity_7[0]='0';
  memcpy(entity_7, entity_8, 95*sizeof(char));
}