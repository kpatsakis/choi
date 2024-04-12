void fun()
{
  int entity_2 = 5;
  char* entity_0;
  char entity_1[entity_2] = "";
  entity_1 = NULL;
  memset(entity_1, 'd', entity_2-1);
  entity_1[entity_2-1]='';
  entity_0 = (char*)malloc(6*sizeof(char));
  entity_0[6-1]='';
  memcpy(entity_0, entity_1, entity_2*sizeof(char));
}