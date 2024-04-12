void fun()
{
  int entity_5 = 37;
  char* entity_9;
  char entity_6[50] = "";
  entity_6 = NULL;
  char entity_8[entity_5] = "";
  entity_8 = NULL;
  memset(entity_8, 'E', entity_5-1);
  entity_8[entity_5-1]='';
  memset(entity_6, 'U', 50-1);
  entity_6[50-1]='';
  entity_9 = (char*)malloc(11*sizeof(char));
  entity_9[11-1]='';
  entity_8[62] = 'j';
}