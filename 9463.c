void fun()
{
  int entity_7 = 98;
  entity_7 = 9;
  char entity_0[28] = "";
  entity_0 = NULL;
  char* entity_2;
  memset(entity_0, 'z', 28-1);
  entity_0[28-1]='';
  entity_2 = (char*)malloc(entity_7*sizeof(char));
  entity_2[entity_7-1]='';
  strcpy(entity_2, entity_0);
}