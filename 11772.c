void fun()
{
  char* entity_0;
  char entity_7[40] = "";
  char entity_8[16] = "";
  char entity_6 = 'w';
  memset(entity_7, 'v', 40-1);
  entity_7[40-1]='0';
  memset(entity_8, 'A', 16-1);
  entity_8[16-1]='0';
  entity_0 = (char*)malloc(96*sizeof(char));
  entity_0[0]='0';
  memcpy(entity_0, entity_7, 40*sizeof(char));
}