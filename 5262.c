void fun()
{
  int entity_6 = 10;
  int entity_3 = 59;
  char entity_8 = 'R';
  char* entity_2;
  char entity_0[29] = "";
  entity_0 = NULL;
  entity_2 = (char*)malloc(entity_3*sizeof(char));
  entity_2[entity_3-1]='';
  memset(entity_0, 't', 29-1);
  entity_0[29-1]='';
  strcpy(entity_2, entity_0);
}