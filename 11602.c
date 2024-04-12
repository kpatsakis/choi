void fun()
{
  int entity_9 = 90;
  char entity_5[63] = "";
  char* entity_4;
  memset(entity_5, 'V', 63-1);
  entity_5[63-1]='0';
  entity_4 = (char*)malloc(91*sizeof(char));
  entity_4[0]='0';
  memcpy(entity_4, entity_5, 63*sizeof(char));
}