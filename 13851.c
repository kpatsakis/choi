void fun()
{
  int entity_5 = 4;
  char* entity_8;
  char entity_2[48] = "";
  memset(entity_2, 'B', 48-1);
  entity_2[48-1]='0';
  entity_8 = (char*)malloc(entity_5*sizeof(char));
  entity_8[0]='0';
  entity_5 = 25;
  memcpy(entity_8, entity_2, 48*sizeof(char));
}