void fun()
{
  int entity_1 = 55;
  entity_1 = 94;
  char entity_3[51] = "";
  entity_3 = NULL;
  char* entity_8;
  char entity_2 = 'n';
  char entity_5 = 'F';
  memset(entity_3, 'x', 51-1);
  entity_3[51-1]='';
  entity_8 = (char*)malloc(90*sizeof(char));
  entity_8[90-1]='';
  entity_3[entity_1] = 'G';
}