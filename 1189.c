void fun()
{
  int entity_3 = 87;
  char* entity_0;
  char entity_4[6] = "";
  entity_4 = NULL;
  char* entity_1;
  entity_0 = (char*)malloc(59*sizeof(char));
  entity_0[59-1]='';
  entity_1 = (char*)malloc(entity_3*sizeof(char));
  entity_1[entity_3-1]='';
  memset(entity_4, 'F', 6-1);
  entity_4[6-1]='';
  entity_3 = 22;
  memcpy(entity_1, entity_4, 6*sizeof(char));
}