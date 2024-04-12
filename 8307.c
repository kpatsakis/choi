void fun()
{
  int entity_5 = 8;
  char entity_0[entity_5] = "";
  entity_0 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(35*sizeof(char));
  entity_8[35-1]='';
  memset(entity_0, 'k', entity_5-1);
  entity_0[entity_5-1]='';
  entity_0[70] = 'J';
}