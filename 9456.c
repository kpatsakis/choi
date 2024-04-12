void fun()
{
  int entity_6 = 24;
  char entity_2[entity_6] = "";
  entity_2 = NULL;
  char* entity_3;
  memset(entity_2, 'u', entity_6-1);
  entity_2[entity_6-1]='';
  entity_3 = (char*)malloc(49*sizeof(char));
  entity_3[49-1]='';
  memcpy(entity_3, entity_2, entity_6*sizeof(char));
}