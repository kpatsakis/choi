void fun()
{
  int entity_0 = 22;
  entity_0 = 97;
  char entity_7[46] = "";
  entity_7 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(entity_0*sizeof(char));
  entity_1[entity_0-1]='';
  memset(entity_7, 'N', 46-1);
  entity_7[46-1]='';
  memcpy(entity_1, entity_7, 46*sizeof(char));
}