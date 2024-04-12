void fun()
{
  int entity_6 = 11;
  char entity_2[entity_6] = "";
  entity_2 = NULL;
  char* entity_7;
  memset(entity_2, 'R', entity_6-1);
  entity_2[entity_6-1]='';
  entity_7 = (char*)malloc(42*sizeof(char));
  entity_7[42-1]='';
  memcpy(entity_7, entity_2, entity_6*sizeof(char));
}