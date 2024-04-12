void fun()
{
  int entity_6 = 28;
  char entity_1[entity_6] = "";
  entity_1 = NULL;
  char* entity_0;
  memset(entity_1, 'N', entity_6-1);
  entity_1[entity_6-1]='';
  entity_0 = (char*)malloc(70*sizeof(char));
  entity_0[70-1]='';
  memcpy(entity_0, entity_1, entity_6*sizeof(char));
}