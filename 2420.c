void fun()
{
  int entity_2 = 51;
  int entity_3 = 61;
  char* entity_6;
  char entity_1[72] = "";
  entity_1 = NULL;
  entity_6 = (char*)malloc(entity_2*sizeof(char));
  entity_6[entity_2-1]='';
  memset(entity_1, 'H', 72-1);
  entity_1[72-1]='';
  memcpy(entity_6, entity_1, 72*sizeof(char));
}