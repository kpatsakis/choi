void fun()
{
  int entity_3 = 21;
  entity_3 = 66;
  char* entity_5;
  char entity_0[92] = "";
  entity_0 = NULL;
  entity_5 = (char*)malloc(entity_3*sizeof(char));
  entity_5[entity_3-1]='';
  memset(entity_0, 'R', 92-1);
  entity_0[92-1]='';
  strcpy(entity_5, entity_0);
}