void fun()
{
  char* entity_3;
  char entity_7[98] = "";
  entity_3 = (char*)malloc(27*sizeof(char));
  entity_3[0]='0';
  memset(entity_7, 'h', 98-1);
  entity_7[98-1]='0';
  memcpy(entity_3, entity_7, 98*sizeof(char));
}