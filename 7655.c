void fun()
{
  int entity_7 = 31;
  int entity_8 = 68;
  entity_8 = 10;
  char entity_4[entity_8] = "";
  entity_4 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(32*sizeof(char));
  entity_0[32-1]='';
  memset(entity_4, 'V', entity_8-1);
  entity_4[entity_8-1]='';
  entity_4[2] = 'a';
}