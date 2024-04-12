void fun()
{
  int entity_3 = 77;
  char* entity_6;
  char entity_2[entity_3] = "";
  entity_2 = NULL;
  entity_6 = (char*)malloc(42*sizeof(char));
  entity_6[42-1]='';
  memset(entity_2, 'c', entity_3-1);
  entity_2[entity_3-1]='';
  entity_3 = 21;
  memcpy(entity_6, entity_2, entity_3*sizeof(char));
}