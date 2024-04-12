void fun()
{
  int entity_1 = 30;
  entity_1 = 20;
  char* entity_0;
  char entity_6[entity_1] = "";
  entity_6 = NULL;
  memset(entity_6, 'V', entity_1-1);
  entity_6[entity_1-1]='';
  entity_0 = (char*)malloc(79*sizeof(char));
  entity_0[79-1]='';
  memcpy(entity_0, entity_6, entity_1*sizeof(char));
}