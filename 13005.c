void fun()
{
  int entity_2 = 30;
  entity_2 = 87;
  char* entity_8;
  char entity_5[8] = "";
  entity_8 = (char*)malloc(entity_2*sizeof(char));
  entity_8[0]='0';
  memset(entity_5, 'A', 8-1);
  entity_5[8-1]='0';
  memcpy(entity_8, entity_5, 8*sizeof(char));
}