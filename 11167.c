void fun()
{
  char* entity_8;
  char entity_9[61] = "";
  memset(entity_9, 'E', 61-1);
  entity_9[61-1]='0';
  entity_8 = (char*)malloc(30*sizeof(char));
  entity_8[0]='0';
  memcpy(entity_8, entity_9, 61*sizeof(char));
}