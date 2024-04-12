void fun()
{
  int entity_4 = 54;
  char* entity_3;
  char entity_5[33] = "";
  entity_5 = NULL;
  memset(entity_5, 'T', 33-1);
  entity_5[33-1]='';
  entity_3 = (char*)malloc(90*sizeof(char));
  entity_3[90-1]='';
  entity_5[entity_4] = 'l';
}