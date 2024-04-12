void fun()
{
  char entity_3 = 'q';
  char entity_8[51] = "";
  char* entity_9;
  memset(entity_8, 'u', 51-1);
  entity_8[51-1]='0';
  entity_9 = (char*)malloc(27*sizeof(char));
  entity_9[0]='0';
  memcpy(entity_9, entity_8, 51*sizeof(char));
}