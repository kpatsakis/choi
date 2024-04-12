void fun()
{
  char* entity_6;
  char entity_7[86] = "";
  entity_6 = (char*)malloc(16*sizeof(char));
  entity_6[0]='0';
  memset(entity_7, 'P', 86-1);
  entity_7[86-1]='0';
  memcpy(entity_6, entity_7, 86*sizeof(char));
}