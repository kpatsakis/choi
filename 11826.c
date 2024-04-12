void fun()
{
  int entity_8 = 33;
  char* entity_9;
  char entity_2[40] = "";
  char entity_7[96] = "";
  memset(entity_2, 'x', 40-1);
  entity_2[40-1]='0';
  memset(entity_7, 'g', 96-1);
  entity_7[96-1]='0';
  entity_9 = (char*)malloc(39*sizeof(char));
  entity_9[0]='0';
  memcpy(entity_9, entity_7, 96*sizeof(char));
}