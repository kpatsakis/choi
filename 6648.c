void fun()
{
  int entity_1 = 6;
  char entity_0[entity_1] = "";
  entity_0 = NULL;
  char* entity_4;
  char entity_3 = 'b';
  memset(entity_0, 'a', entity_1-1);
  entity_0[entity_1-1]='';
  entity_4 = (char*)malloc(86*sizeof(char));
  entity_4[86-1]='';
  entity_1 = 25;
  memcpy(entity_4, entity_0, entity_1*sizeof(char));
}