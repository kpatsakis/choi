void fun()
{
  int entity_4 = 45;
  int entity_7 = 85;
  char* entity_0;
  char* entity_2;
  char entity_8[64] = "";
  entity_8 = NULL;
  memset(entity_8, 'G', 64-1);
  entity_8[64-1]='';
  entity_2 = (char*)malloc(entity_4*sizeof(char));
  entity_2[entity_4-1]='';
  entity_0 = (char*)malloc(42*sizeof(char));
  entity_0[42-1]='';
  strcpy(entity_2, entity_8);
}