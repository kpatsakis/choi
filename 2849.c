void fun()
{
  int entity_6 = 10;
  char entity_8 = 'C';
  char entity_0[entity_6] = "";
  entity_0 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(20*sizeof(char));
  entity_7[20-1]='';
  memset(entity_0, 'K', entity_6-1);
  entity_0[entity_6-1]='';
  entity_6 = 62;
  memcpy(entity_7, entity_0, entity_6*sizeof(char));
}