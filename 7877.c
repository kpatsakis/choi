void fun()
{
  int entity_2 = 96;
  char entity_3 = 'D';
  char* entity_4;
  char entity_0[17] = "";
  entity_0 = NULL;
  memset(entity_0, 'x', 17-1);
  entity_0[17-1]='';
  entity_4 = (char*)malloc(89*sizeof(char));
  entity_4[89-1]='';
  memcpy(entity_4, entity_0, 17*sizeof(char));
}