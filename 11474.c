void fun()
{
  char entity_8[59] = "";
  char* entity_0;
  char entity_9 = 'a';
  memset(entity_8, 's', 59-1);
  entity_8[59-1]='0';
  entity_0 = (char*)malloc(56*sizeof(char));
  entity_0[0]='0';
  memcpy(entity_0, entity_8, 59*sizeof(char));
}