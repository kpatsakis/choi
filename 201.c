void fun()
{
  int entity_0 = 71;
  char* entity_6;
  char entity_1[18] = "";
  entity_1 = NULL;
  memset(entity_1, 'C', 18-1);
  entity_1[18-1]='';
  entity_6 = (char*)malloc(entity_0*sizeof(char));
  entity_6[entity_0-1]='';
  memcpy(entity_6, entity_1, 18*sizeof(char));
}