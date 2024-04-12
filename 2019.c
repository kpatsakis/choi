void fun()
{
  int entity_3 = 30;
  char* entity_1;
  char entity_5[entity_3] = "";
  entity_5 = NULL;
  entity_1 = (char*)malloc(20*sizeof(char));
  entity_1[20-1]='';
  memset(entity_5, 'j', entity_3-1);
  entity_5[entity_3-1]='';
  memcpy(entity_1, entity_5, entity_3*sizeof(char));
}