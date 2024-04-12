void fun()
{
  int entity_1 = 100;
  char* entity_2;
  char entity_0[entity_1] = "";
  entity_0 = NULL;
  memset(entity_0, 'm', entity_1-1);
  entity_0[entity_1-1]='';
  entity_2 = (char*)malloc(14*sizeof(char));
  entity_2[14-1]='';
  memcpy(entity_2, entity_0, entity_1*sizeof(char));
}