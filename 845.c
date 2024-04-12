void fun()
{
  int entity_5 = 78;
  char entity_4[40] = "";
  entity_4 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(entity_5*sizeof(char));
  entity_0[entity_5-1]='';
  memset(entity_4, 'd', 40-1);
  entity_4[40-1]='';
  memcpy(entity_0, entity_4, 40*sizeof(char));
}