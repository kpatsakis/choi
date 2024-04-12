void fun()
{
  int entity_0 = 80;
  char entity_1[39] = "";
  entity_1 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(88*sizeof(char));
  entity_5[88-1]='';
  memset(entity_1, 'j', 39-1);
  entity_1[39-1]='';
  entity_1[entity_0] = 'G';
}