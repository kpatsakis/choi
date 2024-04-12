void fun()
{
  int entity_0 = 29;
  entity_0 = 74;
  char entity_1[51] = "";
  entity_1 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(entity_0*sizeof(char));
  entity_5[entity_0-1]='';
  memset(entity_1, 'D', 51-1);
  entity_1[51-1]='';
  memcpy(entity_5, entity_1, 51*sizeof(char));
}