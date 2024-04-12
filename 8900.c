void fun()
{
  int entity_6 = 8;
  char entity_4 = 'x';
  char* entity_2;
  char entity_5[entity_6] = "";
  entity_5 = NULL;
  char* entity_0;
  memset(entity_5, 'q', entity_6-1);
  entity_5[entity_6-1]='';
  entity_0 = (char*)malloc(67*sizeof(char));
  entity_0[67-1]='';
  entity_2 = (char*)malloc(80*sizeof(char));
  entity_2[80-1]='';
  entity_6 = 82;
  strcpy(entity_2, entity_5);
}