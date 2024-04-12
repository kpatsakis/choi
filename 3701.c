void fun()
{
  int entity_4 = 25;
  char entity_0[2] = "";
  entity_0 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(entity_4*sizeof(char));
  entity_3[entity_4-1]='';
  memset(entity_0, 'J', 2-1);
  entity_0[2-1]='';
  entity_4 = 18;
  memcpy(entity_3, entity_0, 2*sizeof(char));
}