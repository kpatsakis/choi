void fun()
{
  int entity_1 = 40;
  char entity_0[13] = "";
  entity_0 = NULL;
  char* entity_3;
  char entity_6 = 'J';
  entity_3 = (char*)malloc(entity_1*sizeof(char));
  entity_3[entity_1-1]='';
  memset(entity_0, 'W', 13-1);
  entity_0[13-1]='';
  strcpy(entity_3, entity_0);
}