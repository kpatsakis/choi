void fun()
{
  int entity_5 = 34;
  int entity_4 = 7;
  entity_5 = 15;
  char entity_0[entity_5] = "";
  entity_0 = NULL;
  char* entity_1;
  memset(entity_0, 'j', entity_5-1);
  entity_0[entity_5-1]='';
  entity_1 = (char*)malloc(24*sizeof(char));
  entity_1[24-1]='';
  entity_0[81] = 'n';
}