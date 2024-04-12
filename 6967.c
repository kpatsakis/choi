void fun()
{
  int entity_6 = 1;
  char entity_4 = 'W';
  char* entity_2;
  char entity_0[entity_6] = "";
  entity_0 = NULL;
  memset(entity_0, 'k', entity_6-1);
  entity_0[entity_6-1]='';
  entity_2 = (char*)malloc(6*sizeof(char));
  entity_2[6-1]='';
  memcpy(entity_2, entity_0, entity_6*sizeof(char));
}