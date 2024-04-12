void fun()
{
  int entity_6 = 64;
  char* entity_7;
  char entity_3[entity_6] = "";
  entity_3 = NULL;
  entity_7 = (char*)malloc(86*sizeof(char));
  entity_7[86-1]='';
  memset(entity_3, 'H', entity_6-1);
  entity_3[entity_6-1]='';
  entity_6 = 56;
  memcpy(entity_7, entity_3, entity_6*sizeof(char));
}