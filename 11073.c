void fun()
{
  char* entity_1;
  char entity_6[4] = "";
  entity_1 = (char*)malloc(39*sizeof(char));
  entity_1[0]='0';
  memset(entity_6, 'z', 4-1);
  entity_6[4-1]='0';
  memcpy(entity_1, entity_6, 4*sizeof(char));
}