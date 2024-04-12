void fun()
{
  int entity_3 = 16;
  char entity_8[entity_3] = "";
  entity_8 = NULL;
  char* entity_5;
  char entity_4 = 'A';
  entity_5 = (char*)malloc(79*sizeof(char));
  entity_5[79-1]='';
  memset(entity_8, 'm', entity_3-1);
  entity_8[entity_3-1]='';
  memcpy(entity_5, entity_8, entity_3*sizeof(char));
}