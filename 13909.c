void fun()
{
  int entity_1 = 8;
  entity_1 = 6;
  char entity_4 = 'N';
  char* entity_6;
  char entity_0 = 'U';
  char entity_9[40] = "";
  memset(entity_9, 'g', 40-1);
  entity_9[40-1]='0';
  entity_6 = (char*)malloc(entity_1*sizeof(char));
  entity_6[0]='0';
  memcpy(entity_6, entity_9, 40*sizeof(char));
}