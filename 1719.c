void fun()
{
  int entity_3 = 31;
  char entity_6 = 'X';
  char entity_5[entity_3] = "";
  entity_5 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(72*sizeof(char));
  entity_4[72-1]='';
  memset(entity_5, 'p', entity_3-1);
  entity_5[entity_3-1]='';
  memcpy(entity_4, entity_5, entity_3*sizeof(char));
}