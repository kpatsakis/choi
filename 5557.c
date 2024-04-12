void fun()
{
  int entity_6 = 16;
  char* entity_8;
  char entity_1[17] = "";
  entity_1 = NULL;
  char entity_0[53] = "";
  entity_0 = NULL;
  entity_8 = (char*)malloc(31*sizeof(char));
  entity_8[31-1]='';
  memset(entity_1, 'u', 17-1);
  entity_1[17-1]='';
  memset(entity_0, 'h', 53-1);
  entity_0[53-1]='';
  memcpy(entity_8, entity_0, 53*sizeof(char));
}