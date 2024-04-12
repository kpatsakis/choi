void fun()
{
  int entity_0 = 6;
  char* entity_3;
  char entity_1[29] = "";
  entity_1 = NULL;
  char entity_2[entity_0] = "";
  entity_2 = NULL;
  entity_3 = (char*)malloc(30*sizeof(char));
  entity_3[30-1]='';
  memset(entity_2, 'a', entity_0-1);
  entity_2[entity_0-1]='';
  memset(entity_1, 'a', 29-1);
  entity_1[29-1]='';
  memcpy(entity_3, entity_2, entity_0*sizeof(char));
}