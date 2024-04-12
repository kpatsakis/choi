void fun()
{
  int entity_3 = 23;
  entity_3 = 89;
  char entity_1[entity_3] = "";
  entity_1 = NULL;
  char* entity_2;
  memset(entity_1, 'Y', entity_3-1);
  entity_1[entity_3-1]='';
  entity_2 = (char*)malloc(51*sizeof(char));
  entity_2[51-1]='';
  memcpy(entity_2, entity_1, entity_3*sizeof(char));
}