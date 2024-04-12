void fun()
{
  int entity_3 = 9;
  int entity_6 = 91;
  int entity_0 = 49;
  char* entity_7;
  char entity_2[entity_3] = "";
  entity_2 = NULL;
  memset(entity_2, 'L', entity_3-1);
  entity_2[entity_3-1]='';
  entity_7 = (char*)malloc(39*sizeof(char));
  entity_7[39-1]='';
  memcpy(entity_7, entity_2, entity_3*sizeof(char));
}