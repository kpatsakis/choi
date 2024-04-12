void fun()
{
  int entity_6 = 86;
  char entity_2[entity_6] = "";
  entity_2 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(72*sizeof(char));
  entity_0[72-1]='';
  memset(entity_2, 'O', entity_6-1);
  entity_2[entity_6-1]='';
  memcpy(entity_0, entity_2, entity_6*sizeof(char));
}