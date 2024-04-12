void fun()
{
  int entity_9 = 66;
  int entity_6 = 15;
  char entity_4[81] = "";
  entity_4 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(96*sizeof(char));
  entity_8[96-1]='';
  memset(entity_4, 'N', 81-1);
  entity_4[81-1]='';
  entity_4[entity_9] = 'V';
}