void fun()
{
  int entity_3 = 78;
  char entity_2[entity_3] = "";
  entity_2 = NULL;
  char entity_0[74] = "";
  entity_0 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(98*sizeof(char));
  entity_7[98-1]='';
  memset(entity_0, 't', 74-1);
  entity_0[74-1]='';
  memset(entity_2, 'y', entity_3-1);
  entity_2[entity_3-1]='';
  memcpy(entity_7, entity_2, entity_3*sizeof(char));
}