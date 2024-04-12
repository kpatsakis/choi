void fun()
{
  char entity_6[72] = "";
  char entity_5 = 'I';
  char* entity_9;
  memset(entity_6, 'K', 72-1);
  entity_6[72-1]='0';
  entity_9 = (char*)malloc(9*sizeof(char));
  entity_9[0]='0';
  memcpy(entity_9, entity_6, 72*sizeof(char));
}