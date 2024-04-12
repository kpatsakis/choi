void fun()
{
  char entity_8[57] = "";
  char* entity_0;
  entity_0 = (char*)malloc(98*sizeof(char));
  entity_0[0]='0';
  memset(entity_8, 'M', 57-1);
  entity_8[57-1]='0';
  memcpy(entity_0, entity_8, 57*sizeof(char));
}