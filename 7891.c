void fun()
{
  int entity_3 = 77;
  entity_3 = 69;
  char* entity_1;
  char entity_8[entity_3] = "";
  entity_8 = NULL;
  entity_1 = (char*)malloc(96*sizeof(char));
  entity_1[96-1]='';
  memset(entity_8, 'A', entity_3-1);
  entity_8[entity_3-1]='';
  memcpy(entity_1, entity_8, entity_3*sizeof(char));
}