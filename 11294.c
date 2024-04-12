void fun()
{
  char entity_5[55] = "";
  char entity_9[96] = "";
  char* entity_7;
  memset(entity_5, 'q', 55-1);
  entity_5[55-1]='0';
  entity_7 = (char*)malloc(37*sizeof(char));
  entity_7[0]='0';
  memset(entity_9, 'W', 96-1);
  entity_9[96-1]='0';
  memcpy(entity_7, entity_5, 55*sizeof(char));
}