void fun()
{
  int entity_2 = 100;
  char entity_7[15] = "";
  char* entity_6;
  entity_6 = (char*)malloc(entity_2*sizeof(char));
  entity_6[0]='0';
  memset(entity_7, 'L', 15-1);
  entity_7[15-1]='0';
  entity_2 = 21;
  memcpy(entity_6, entity_7, 15*sizeof(char));
}