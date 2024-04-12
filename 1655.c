void fun()
{
  int entity_8 = 42;
  char entity_3[60] = "";
  entity_3 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(entity_8*sizeof(char));
  entity_4[entity_8-1]='';
  memset(entity_3, 'o', 60-1);
  entity_3[60-1]='';
  memcpy(entity_4, entity_3, 60*sizeof(char));
}