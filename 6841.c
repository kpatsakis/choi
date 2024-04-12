void fun()
{
  int entity_4 = 33;
  int entity_8 = 50;
  char entity_7 = 'n';
  char entity_0[entity_4] = "";
  entity_0 = NULL;
  char* entity_5;
  char entity_6 = 'I';
  memset(entity_0, 'k', entity_4-1);
  entity_0[entity_4-1]='';
  entity_5 = (char*)malloc(11*sizeof(char));
  entity_5[11-1]='';
  memcpy(entity_5, entity_0, entity_4*sizeof(char));
}