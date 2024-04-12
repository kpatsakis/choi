void fun()
{
  char* entity_5;
  char entity_1[39] = "";
  entity_5 = (char*)malloc(99*sizeof(char));
  entity_5[0]='0';
  memset(entity_1, 'z', 39-1);
  entity_1[39-1]='0';
  memcpy(entity_5, entity_1, 39*sizeof(char));
}