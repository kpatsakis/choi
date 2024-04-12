void fun()
{
  int entity_6 = 85;
  char entity_1 = 'Q';
  char entity_3 = 'p';
  char* entity_2;
  char entity_0[18] = "";
  entity_0 = NULL;
  char entity_8[55] = "";
  entity_8 = NULL;
  entity_2 = (char*)malloc(entity_6*sizeof(char));
  entity_2[entity_6-1]='';
  memset(entity_0, 'W', 18-1);
  entity_0[18-1]='';
  memset(entity_8, 't', 55-1);
  entity_8[55-1]='';
  memcpy(entity_2, entity_0, 18*sizeof(char));
}