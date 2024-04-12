void fun()
{
  int entity_0 = 9;
  char entity_2[entity_0] = "";
  entity_2 = NULL;
  char* entity_7;
  memset(entity_2, 'Z', entity_0-1);
  entity_2[entity_0-1]='';
  entity_7 = (char*)malloc(86*sizeof(char));
  entity_7[86-1]='';
  memcpy(entity_7, entity_2, entity_0*sizeof(char));
}