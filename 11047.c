void fun()
{
  char* entity_8;
  char entity_5[17] = "";
  entity_8 = (char*)malloc(60*sizeof(char));
  entity_8[0]='0';
  memset(entity_5, 'I', 17-1);
  entity_5[17-1]='0';
  memcpy(entity_8, entity_5, 17*sizeof(char));
}