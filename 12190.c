void fun()
{
  int entity_4 = 65;
  char* entity_0;
  char entity_6[90] = "";
  char entity_8[99] = "";
  char entity_5 = 'T';
  memset(entity_8, 's', 99-1);
  entity_8[99-1]='0';
  memset(entity_6, 'J', 90-1);
  entity_6[90-1]='0';
  entity_0 = (char*)malloc(entity_4*sizeof(char));
  entity_0[0]='0';
  memcpy(entity_0, entity_8, 99*sizeof(char));
}