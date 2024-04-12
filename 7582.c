void fun()
{
  int entity_3 = 32;
  int entity_9 = 0;
  int entity_6 = 72;
  int entity_4 = 44;
  entity_6 = 11;
  char* entity_5;
  char entity_0[84] = "";
  entity_0 = NULL;
  memset(entity_0, 'L', 84-1);
  entity_0[84-1]='';
  entity_5 = (char*)malloc(entity_6*sizeof(char));
  entity_5[entity_6-1]='';
  strcpy(entity_5, entity_0);
}