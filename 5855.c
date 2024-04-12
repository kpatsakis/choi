void fun()
{
  int entity_8 = 84;
  char entity_1[entity_8] = "";
  entity_1 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(80*sizeof(char));
  entity_3[80-1]='';
  memset(entity_1, 'N', entity_8-1);
  entity_1[entity_8-1]='';
  entity_8 = 77;
  memcpy(entity_3, entity_1, entity_8*sizeof(char));
}