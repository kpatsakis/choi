void fun()
{
  int entity_2 = 50;
  int entity_4 = 31;
  char entity_0[entity_4] = "";
  entity_0 = NULL;
  char* entity_1;
  memset(entity_0, 'a', entity_4-1);
  entity_0[entity_4-1]='';
  entity_1 = (char*)malloc(70*sizeof(char));
  entity_1[70-1]='';
  memcpy(entity_1, entity_0, entity_4*sizeof(char));
}