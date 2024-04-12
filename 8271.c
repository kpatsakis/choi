void fun()
{
  int entity_7 = 59;
  char* entity_3;
  char entity_0[16] = "";
  entity_0 = NULL;
  entity_3 = (char*)malloc(entity_7*sizeof(char));
  entity_3[entity_7-1]='';
  memset(entity_0, 'f', 16-1);
  entity_0[16-1]='';
  entity_7 = 5;
  strcpy(entity_3, entity_0);
}