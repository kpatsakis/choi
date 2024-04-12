void fun()
{
  int entity_7 = 87;
  char entity_3[70] = "";
  entity_3 = NULL;
  char* entity_0;
  char entity_5 = 's';
  memset(entity_3, 'A', 70-1);
  entity_3[70-1]='';
  entity_0 = (char*)malloc(entity_7*sizeof(char));
  entity_0[entity_7-1]='';
  memcpy(entity_0, entity_3, 70*sizeof(char));
}