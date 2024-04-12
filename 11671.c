void fun()
{
  char* entity_5;
  char entity_0[12] = "";
  memset(entity_0, 'k', 12-1);
  entity_0[12-1]='0';
  entity_5 = (char*)malloc(73*sizeof(char));
  entity_5[0]='0';
  memcpy(entity_5, entity_0, 12*sizeof(char));
}