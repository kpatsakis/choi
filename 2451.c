void fun()
{
  int entity_3 = 21;
  char* entity_4;
  char entity_2[entity_3] = "";
  entity_2 = NULL;
  memset(entity_2, 'R', entity_3-1);
  entity_2[entity_3-1]='';
  entity_4 = (char*)malloc(85*sizeof(char));
  entity_4[85-1]='';
  memcpy(entity_4, entity_2, entity_3*sizeof(char));
}