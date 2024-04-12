void fun()
{
  int entity_7 = 87;
  char* entity_2;
  char entity_4 = 'D';
  char entity_6[entity_7] = "";
  entity_6 = NULL;
  entity_2 = (char*)malloc(99*sizeof(char));
  entity_2[99-1]='';
  memset(entity_6, 'x', entity_7-1);
  entity_6[entity_7-1]='';
  strcpy(entity_2, entity_6);
}