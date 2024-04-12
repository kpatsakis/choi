void fun()
{
  int entity_2 = 94;
  char entity_8[entity_2] = "";
  entity_8 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(9*sizeof(char));
  entity_5[9-1]='';
  memset(entity_8, 'A', entity_2-1);
  entity_8[entity_2-1]='';
  memcpy(entity_5, entity_8, entity_2*sizeof(char));
}