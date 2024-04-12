void fun()
{
  int entity_5 = 3;
  int entity_3 = 67;
  entity_5 = 46;
  char entity_7[49] = "";
  char* entity_4;
  memset(entity_7, 'u', 49-1);
  entity_7[49-1]='0';
  entity_4 = (char*)malloc(entity_5*sizeof(char));
  entity_4[0]='0';
  memcpy(entity_4, entity_7, 49*sizeof(char));
}