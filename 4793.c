void fun()
{
  int entity_3 = 19;
  char entity_1[entity_3] = "";
  entity_1 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(33*sizeof(char));
  entity_4[33-1]='';
  memset(entity_1, 'T', entity_3-1);
  entity_1[entity_3-1]='';
  entity_3 = 11;
  entity_1[59] = 'o';
}