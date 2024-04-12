void fun()
{
  int entity_4 = 66;
  int entity_1 = 52;
  int entity_5 = 25;
  char entity_0[57] = "";
  char* entity_6;
  memset(entity_0, 'O', 57-1);
  entity_0[57-1]='0';
  entity_6 = (char*)malloc(entity_4*sizeof(char));
  entity_6[0]='0';
  memcpy(entity_6, entity_0, 57*sizeof(char));
}