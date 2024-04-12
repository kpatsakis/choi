void fun()
{
  char* entity_4;
  char entity_9[37] = "";
  entity_4 = (char*)malloc(28*sizeof(char));
  entity_4[0]='0';
  memset(entity_9, 'Q', 37-1);
  entity_9[37-1]='0';
  memcpy(entity_4, entity_9, 37*sizeof(char));
}