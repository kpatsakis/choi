void fun()
{
  int entity_4 = 33;
  char* entity_6;
  char* entity_5;
  char entity_0[4] = "";
  entity_0 = NULL;
  entity_5 = (char*)malloc(74*sizeof(char));
  entity_5[74-1]='';
  memset(entity_0, 'r', 4-1);
  entity_0[4-1]='';
  entity_6 = (char*)malloc(entity_4*sizeof(char));
  entity_6[entity_4-1]='';
  strcpy(entity_6, entity_0);
}