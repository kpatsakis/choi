void fun()
{
  int entity_6 = 49;
  char* entity_0;
  char entity_7 = 'P';
  char entity_3[entity_6] = "";
  entity_3 = NULL;
  entity_0 = (char*)malloc(88*sizeof(char));
  entity_0[88-1]='';
  memset(entity_3, 'R', entity_6-1);
  entity_3[entity_6-1]='';
  memcpy(entity_0, entity_3, entity_6*sizeof(char));
}