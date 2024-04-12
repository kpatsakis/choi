void fun()
{
  int entity_5 = 35;
  entity_5 = 98;
  char* entity_7;
  char entity_6 = 'P';
  char entity_8 = 'J';
  char entity_0[8] = "";
  memset(entity_0, 'L', 8-1);
  entity_0[8-1]='0';
  entity_7 = (char*)malloc(entity_5*sizeof(char));
  entity_7[0]='0';
  memcpy(entity_7, entity_0, 8*sizeof(char));
}