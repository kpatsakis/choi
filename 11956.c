void fun()
{
  char* entity_9;
  char entity_6[54] = "";
  char entity_7 = 'n';
  entity_9 = (char*)malloc(8*sizeof(char));
  entity_9[0]='0';
  memset(entity_6, 'm', 54-1);
  entity_6[54-1]='0';
  memcpy(entity_9, entity_6, 54*sizeof(char));
}