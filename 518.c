void fun()
{
  int entity_5 = 59;
  char entity_0[17] = "";
  entity_0 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(entity_5*sizeof(char));
  entity_3[entity_5-1]='';
  memset(entity_0, 's', 17-1);
  entity_0[17-1]='';
  entity_5 = 64;
  strcpy(entity_3, entity_0);
}