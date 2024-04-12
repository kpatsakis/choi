void fun()
{
  int entity_0 = 49;
  char entity_3[38] = "";
  char* entity_4;
  memset(entity_3, 'P', 38-1);
  entity_3[38-1]='0';
  entity_4 = (char*)malloc(entity_0*sizeof(char));
  entity_4[0]='0';
  entity_0 = 91;
  memcpy(entity_4, entity_3, 38*sizeof(char));
}