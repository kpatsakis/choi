void fun()
{
  int entity_6 = 88;
  char* entity_3;
  char entity_5[entity_6] = "";
  entity_5 = NULL;
  entity_3 = (char*)malloc(28*sizeof(char));
  entity_3[28-1]='';
  memset(entity_5, 'S', entity_6-1);
  entity_5[entity_6-1]='';
  memcpy(entity_3, entity_5, entity_6*sizeof(char));
}