void fun()
{
  int entity_2 = 98;
  entity_2 = 41;
  char* entity_7;
  char entity_1[86] = "";
  entity_1 = NULL;
  memset(entity_1, 'G', 86-1);
  entity_1[86-1]='';
  entity_7 = (char*)malloc(entity_2*sizeof(char));
  entity_7[entity_2-1]='';
  memcpy(entity_7, entity_1, 86*sizeof(char));
}