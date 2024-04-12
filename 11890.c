void fun()
{
  char* entity_6;
  char entity_0[40] = "";
  memset(entity_0, 'W', 40-1);
  entity_0[40-1]='0';
  entity_6 = (char*)malloc(2*sizeof(char));
  entity_6[0]='0';
  memcpy(entity_6, entity_0, 40*sizeof(char));
}