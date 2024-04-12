void fun()
{
  int entity_3 = 31;
  char entity_2[entity_3] = "";
  entity_2 = NULL;
  char* entity_1;
  memset(entity_2, 'R', entity_3-1);
  entity_2[entity_3-1]='';
  entity_1 = (char*)malloc(2*sizeof(char));
  entity_1[2-1]='';
  memcpy(entity_1, entity_2, entity_3*sizeof(char));
}