void fun()
{
  int entity_2 = 31;
  char entity_4[35] = "";
  entity_4 = NULL;
  char entity_0[5] = "";
  entity_0 = NULL;
  char* entity_7;
  memset(entity_0, 'u', 5-1);
  entity_0[5-1]='';
  memset(entity_4, 'v', 35-1);
  entity_4[35-1]='';
  entity_7 = (char*)malloc(32*sizeof(char));
  entity_7[32-1]='';
  entity_2 = 72;
  entity_4[entity_2] = 'w';
}