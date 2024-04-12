void fun()
{
  int entity_3 = 43;
  entity_3 = 51;
  char* entity_4;
  char entity_1[53] = "";
  entity_1 = NULL;
  memset(entity_1, 'F', 53-1);
  entity_1[53-1]='';
  entity_4 = (char*)malloc(entity_3*sizeof(char));
  entity_4[entity_3-1]='';
  memcpy(entity_4, entity_1, 53*sizeof(char));
}