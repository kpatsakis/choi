void fun()
{
  int entity_6 = 4;
  entity_6 = 20;
  char entity_0[30] = "";
  entity_0 = NULL;
  char* entity_5;
  memset(entity_0, 'V', 30-1);
  entity_0[30-1]='';
  entity_5 = (char*)malloc(entity_6*sizeof(char));
  entity_5[entity_6-1]='';
  memcpy(entity_5, entity_0, 30*sizeof(char));
}