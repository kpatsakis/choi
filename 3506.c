void fun()
{
  int entity_3 = 51;
  char entity_7 = 'N';
  char entity_2[entity_3] = "";
  entity_2 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(49*sizeof(char));
  entity_4[49-1]='';
  memset(entity_2, 'y', entity_3-1);
  entity_2[entity_3-1]='';
  memcpy(entity_4, entity_2, entity_3*sizeof(char));
}