void fun()
{
  int entity_1 = 23;
  char* entity_0;
  char entity_4[entity_1] = "";
  entity_4 = NULL;
  memset(entity_4, 'o', entity_1-1);
  entity_4[entity_1-1]='';
  entity_0 = (char*)malloc(34*sizeof(char));
  entity_0[34-1]='';
  entity_1 = 39;
  memcpy(entity_0, entity_4, entity_1*sizeof(char));
}