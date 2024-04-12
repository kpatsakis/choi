void fun()
{
  int entity_6 = 62;
  entity_6 = 98;
  char entity_4[40] = "";
  char* entity_0;
  entity_0 = (char*)malloc(entity_6*sizeof(char));
  entity_0[0]='0';
  memset(entity_4, 'o', 40-1);
  entity_4[40-1]='0';
  memcpy(entity_0, entity_4, 40*sizeof(char));
}