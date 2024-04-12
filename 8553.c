void fun()
{
  int entity_8 = 99;
  entity_8 = 35;
  char* entity_5;
  char entity_0[36] = "";
  entity_0 = NULL;
  memset(entity_0, 's', 36-1);
  entity_0[36-1]='';
  entity_5 = (char*)malloc(entity_8*sizeof(char));
  entity_5[entity_8-1]='';
  memcpy(entity_5, entity_0, 36*sizeof(char));
}