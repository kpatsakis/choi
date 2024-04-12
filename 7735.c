void fun()
{
  int entity_0 = 50;
  char entity_5[17] = "";
  entity_5 = NULL;
  char* entity_1;
  char entity_3 = 'G';
  memset(entity_5, 'H', 17-1);
  entity_5[17-1]='';
  entity_1 = (char*)malloc(entity_0*sizeof(char));
  entity_1[entity_0-1]='';
  memcpy(entity_1, entity_5, 17*sizeof(char));
}