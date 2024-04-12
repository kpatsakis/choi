void fun()
{
  int entity_8 = 3;
  int entity_3 = 13;
  char* entity_1;
  char entity_6 = 'K';
  char entity_0[entity_8] = "";
  entity_0 = NULL;
  memset(entity_0, 'Q', entity_8-1);
  entity_0[entity_8-1]='';
  entity_1 = (char*)malloc(17*sizeof(char));
  entity_1[17-1]='';
  entity_8 = 96;
  strcpy(entity_1, entity_0);
}