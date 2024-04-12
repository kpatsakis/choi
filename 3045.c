void fun()
{
  int entity_3 = 56;
  char* entity_8;
  char entity_2[entity_3] = "";
  entity_2 = NULL;
  entity_8 = (char*)malloc(86*sizeof(char));
  entity_8[86-1]='';
  memset(entity_2, 'S', entity_3-1);
  entity_2[entity_3-1]='';
  memcpy(entity_8, entity_2, entity_3*sizeof(char));
}