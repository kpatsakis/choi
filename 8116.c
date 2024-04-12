void fun()
{
  int entity_6 = 10;
  char* entity_5;
  char entity_3[entity_6] = "";
  entity_3 = NULL;
  memset(entity_3, 't', entity_6-1);
  entity_3[entity_6-1]='';
  entity_5 = (char*)malloc(65*sizeof(char));
  entity_5[65-1]='';
  entity_3[71] = 'G';
}