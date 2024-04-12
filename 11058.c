void fun()
{
  char* entity_4;
  char entity_6[3] = "";
  memset(entity_6, 'J', 3-1);
  entity_6[3-1]='0';
  entity_4 = (char*)malloc(39*sizeof(char));
  entity_4[0]='0';
  memcpy(entity_4, entity_6, 3*sizeof(char));
}