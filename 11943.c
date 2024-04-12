void fun()
{
  char* entity_3;
  char entity_8[53] = "";
  entity_3 = (char*)malloc(67*sizeof(char));
  entity_3[0]='0';
  memset(entity_8, 't', 53-1);
  entity_8[53-1]='0';
  memcpy(entity_3, entity_8, 53*sizeof(char));
}