void fun()
{
  int entity_3 = 43;
  char entity_6[entity_3] = "";
  entity_6 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(51*sizeof(char));
  entity_2[51-1]='';
  memset(entity_6, 'p', entity_3-1);
  entity_6[entity_3-1]='';
  entity_3 = 57;
  memcpy(entity_2, entity_6, entity_3*sizeof(char));
}