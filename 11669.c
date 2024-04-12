void fun()
{
  char* entity_7;
  char entity_4[58] = "";
  entity_7 = (char*)malloc(14*sizeof(char));
  entity_7[0]='0';
  memset(entity_4, 'l', 58-1);
  entity_4[58-1]='0';
  memcpy(entity_7, entity_4, 58*sizeof(char));
}