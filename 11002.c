void fun()
{
  char entity_8[80] = "";
  char* entity_7;
  entity_7 = (char*)malloc(15*sizeof(char));
  entity_7[0]='0';
  memset(entity_8, 'f', 80-1);
  entity_8[80-1]='0';
  memcpy(entity_7, entity_8, 80*sizeof(char));
}