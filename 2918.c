void fun()
{
  int entity_0 = 26;
  int entity_3 = 6;
  char entity_5[entity_0] = "";
  entity_5 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(40*sizeof(char));
  entity_1[40-1]='';
  memset(entity_5, 'F', entity_0-1);
  entity_5[entity_0-1]='';
  memcpy(entity_1, entity_5, entity_0*sizeof(char));
}