void fun()
{
  int entity_2 = 64;
  entity_2 = 33;
  char entity_0[68] = "";
  entity_0 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(entity_2*sizeof(char));
  entity_3[entity_2-1]='';
  memset(entity_0, 'P', 68-1);
  entity_0[68-1]='';
  strcpy(entity_3, entity_0);
}