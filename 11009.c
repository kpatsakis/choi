void fun()
{
  char entity_9[80] = "";
  char* entity_8;
  entity_8 = (char*)malloc(15*sizeof(char));
  entity_8[0]='0';
  memset(entity_9, 'm', 80-1);
  entity_9[80-1]='0';
  memcpy(entity_8, entity_9, 80*sizeof(char));
}