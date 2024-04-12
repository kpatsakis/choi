void fun()
{
  int entity_2 = 51;
  entity_2 = 63;
  char entity_5[entity_2] = "";
  entity_5 = NULL;
  char* entity_0;
  memset(entity_5, 'Q', entity_2-1);
  entity_5[entity_2-1]='';
  entity_0 = (char*)malloc(21*sizeof(char));
  entity_0[21-1]='';
  entity_5[95] = 'S';
}