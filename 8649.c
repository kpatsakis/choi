void fun()
{
  int entity_4 = 66;
  entity_4 = 83;
  char entity_0[92] = "";
  entity_0 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(entity_4*sizeof(char));
  entity_1[entity_4-1]='';
  memset(entity_0, 'g', 92-1);
  entity_0[92-1]='';
  strcpy(entity_1, entity_0);
}