void fun()
{
  int entity_3 = 97;
  char* entity_7;
  char entity_4[entity_3] = "";
  entity_4 = NULL;
  memset(entity_4, 'd', entity_3-1);
  entity_4[entity_3-1]='';
  entity_7 = (char*)malloc(21*sizeof(char));
  entity_7[21-1]='';
  entity_4[88] = 'R';
}