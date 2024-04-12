void fun()
{
  int entity_3 = 2;
  char* entity_7;
  char entity_0[69] = "";
  entity_0 = NULL;
  memset(entity_0, 'Y', 69-1);
  entity_0[69-1]='';
  entity_7 = (char*)malloc(entity_3*sizeof(char));
  entity_7[entity_3-1]='';
  entity_3 = 98;
  strcpy(entity_7, entity_0);
}