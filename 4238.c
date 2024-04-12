void fun()
{
  int entity_6 = 62;
  char entity_0[entity_6] = "";
  entity_0 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(70*sizeof(char));
  entity_5[70-1]='';
  memset(entity_0, 'M', entity_6-1);
  entity_0[entity_6-1]='';
  memcpy(entity_5, entity_0, entity_6*sizeof(char));
}