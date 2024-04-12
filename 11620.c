void fun()
{
  char* entity_8;
  char* entity_7;
  char entity_9[98] = "";
  memset(entity_9, 'l', 98-1);
  entity_9[98-1]='0';
  entity_7 = (char*)malloc(86*sizeof(char));
  entity_7[0]='0';
  entity_8 = (char*)malloc(74*sizeof(char));
  entity_8[0]='0';
  memcpy(entity_7, entity_9, 98*sizeof(char));
}