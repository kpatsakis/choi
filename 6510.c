void fun()
{
  int entity_1 = 45;
  entity_1 = 1;
  char entity_0[entity_1] = "";
  entity_0 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(72*sizeof(char));
  entity_6[72-1]='';
  memset(entity_0, 'w', entity_1-1);
  entity_0[entity_1-1]='';
  memcpy(entity_6, entity_0, entity_1*sizeof(char));
}