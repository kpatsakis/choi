void fun()
{
  int entity_4 = 42;
  char* entity_8;
  char entity_5[8] = "";
  entity_5 = NULL;
  memset(entity_5, 'G', 8-1);
  entity_5[8-1]='';
  entity_8 = (char*)malloc(74*sizeof(char));
  entity_8[74-1]='';
  entity_5[entity_4] = 'E';
}