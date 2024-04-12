void fun()
{
  int entity_3 = 3;
  char entity_1[entity_3] = "";
  entity_1 = NULL;
  char* entity_8;
  memset(entity_1, 'j', entity_3-1);
  entity_1[entity_3-1]='';
  entity_8 = (char*)malloc(22*sizeof(char));
  entity_8[22-1]='';
  entity_3 = 28;
  memcpy(entity_8, entity_1, entity_3*sizeof(char));
}