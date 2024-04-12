void fun()
{
  char entity_8[14] = "";
  char* entity_5;
  char* entity_0;
  entity_0 = (char*)malloc(69*sizeof(char));
  entity_0[0]='0';
  memset(entity_8, 'a', 14-1);
  entity_8[14-1]='0';
  entity_5 = (char*)malloc(23*sizeof(char));
  entity_5[0]='0';
  memcpy(entity_0, entity_8, 14*sizeof(char));
}