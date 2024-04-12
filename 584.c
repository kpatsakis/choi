void fun()
{
  int entity_7 = 77;
  int entity_3 = 51;
  char* entity_2;
  char entity_5[entity_3] = "";
  entity_5 = NULL;
  memset(entity_5, 'q', entity_3-1);
  entity_5[entity_3-1]='';
  entity_2 = (char*)malloc(12*sizeof(char));
  entity_2[12-1]='';
  entity_3 = 86;
  entity_5[55] = 'R';
}