void fun()
{
  int entity_5 = 24;
  char entity_4[3] = "";
  char* entity_6;
  entity_6 = (char*)malloc(entity_5*sizeof(char));
  entity_6[0]='0';
  memset(entity_4, 'g', 3-1);
  entity_4[3-1]='0';
  memcpy(entity_6, entity_4, 3*sizeof(char));
}