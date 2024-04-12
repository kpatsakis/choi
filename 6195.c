void fun()
{
  int entity_4 = 41;
  entity_4 = 61;
  char entity_1[entity_4] = "";
  entity_1 = NULL;
  char* entity_3;
  memset(entity_1, 'k', entity_4-1);
  entity_1[entity_4-1]='';
  entity_3 = (char*)malloc(76*sizeof(char));
  entity_3[76-1]='';
  entity_1[37] = 'E';
}