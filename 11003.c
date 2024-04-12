void fun()
{
  char entity_4[91] = "";
  char* entity_5;
  memset(entity_4, 'j', 91-1);
  entity_4[91-1]='0';
  entity_5 = (char*)malloc(27*sizeof(char));
  entity_5[0]='0';
  memcpy(entity_5, entity_4, 91*sizeof(char));
}