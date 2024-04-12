void fun()
{
  int entity_3 = 27;
  int entity_2 = 86;
  char* entity_4;
  char entity_0[100] = "";
  entity_0 = NULL;
  char* entity_8;
  char entity_5 = 'U';
  entity_4 = (char*)malloc(entity_3*sizeof(char));
  entity_4[entity_3-1]='';
  memset(entity_0, 'F', 100-1);
  entity_0[100-1]='';
  entity_8 = (char*)malloc(22*sizeof(char));
  entity_8[22-1]='';
  memcpy(entity_4, entity_0, 100*sizeof(char));
}