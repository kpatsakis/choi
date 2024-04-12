void fun()
{
  int entity_8 = 47;
  char entity_3[entity_8] = "";
  entity_3 = NULL;
  char* entity_0;
  char* entity_1;
  entity_1 = (char*)malloc(59*sizeof(char));
  entity_1[59-1]='';
  entity_0 = (char*)malloc(79*sizeof(char));
  entity_0[79-1]='';
  memset(entity_3, 'I', entity_8-1);
  entity_3[entity_8-1]='';
  memcpy(entity_1, entity_3, entity_8*sizeof(char));
}