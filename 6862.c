void fun()
{
  int entity_2 = 17;
  char* entity_7;
  char entity_0[entity_2] = "";
  entity_0 = NULL;
  char* entity_3;
  entity_7 = (char*)malloc(37*sizeof(char));
  entity_7[37-1]='';
  entity_3 = (char*)malloc(18*sizeof(char));
  entity_3[18-1]='';
  memset(entity_0, 'm', entity_2-1);
  entity_0[entity_2-1]='';
  entity_2 = 46;
  strcpy(entity_3, entity_0);
}