void fun()
{
  int entity_2 = 88;
  char entity_5 = 'F';
  char* entity_4;
  char entity_3[entity_2] = "";
  entity_3 = NULL;
  memset(entity_3, 'o', entity_2-1);
  entity_3[entity_2-1]='';
  entity_4 = (char*)malloc(77*sizeof(char));
  entity_4[77-1]='';
  memcpy(entity_4, entity_3, entity_2*sizeof(char));
}