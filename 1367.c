void fun()
{
  int entity_7 = 57;
  int entity_4 = 60;
  char* entity_5;
  char entity_0[entity_4] = "";
  entity_0 = NULL;
  memset(entity_0, 'R', entity_4-1);
  entity_0[entity_4-1]='';
  entity_5 = (char*)malloc(34*sizeof(char));
  entity_5[34-1]='';
  memcpy(entity_5, entity_0, entity_4*sizeof(char));
}