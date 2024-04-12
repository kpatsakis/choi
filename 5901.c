void fun()
{
  int entity_6 = 67;
  char* entity_0;
  char entity_5[40] = "";
  entity_5 = NULL;
  entity_0 = (char*)malloc(entity_6*sizeof(char));
  entity_0[entity_6-1]='';
  memset(entity_5, 'L', 40-1);
  entity_5[40-1]='';
  entity_6 = 68;
  memcpy(entity_0, entity_5, 40*sizeof(char));
}