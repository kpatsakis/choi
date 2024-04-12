void fun()
{
  int entity_2 = 54;
  entity_2 = 33;
  char entity_5[24] = "";
  entity_5 = NULL;
  char* entity_8;
  char entity_0[28] = "";
  entity_0 = NULL;
  memset(entity_0, 'e', 28-1);
  entity_0[28-1]='';
  memset(entity_5, 'R', 24-1);
  entity_5[24-1]='';
  entity_8 = (char*)malloc(entity_2*sizeof(char));
  entity_8[entity_2-1]='';
  memcpy(entity_8, entity_5, 24*sizeof(char));
}