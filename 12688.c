void fun()
{
  int entity_2 = 94;
  int entity_0 = 33;
  char entity_4 = 'y';
  char entity_6[43] = "";
  char* entity_8;
  memset(entity_6, 'K', 43-1);
  entity_6[43-1]='0';
  entity_8 = (char*)malloc(entity_2*sizeof(char));
  entity_8[0]='0';
  memcpy(entity_8, entity_6, 43*sizeof(char));
}