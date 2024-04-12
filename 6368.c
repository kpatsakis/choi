void fun()
{
  int entity_3 = 90;
  entity_3 = 36;
  char* entity_0;
  char entity_2[entity_3] = "";
  entity_2 = NULL;
  memset(entity_2, 'w', entity_3-1);
  entity_2[entity_3-1]='';
  entity_0 = (char*)malloc(2*sizeof(char));
  entity_0[2-1]='';
  memcpy(entity_0, entity_2, entity_3*sizeof(char));
}